#include <iostream>

using namespace std;

///error validation for CIN
void errorValidation(){
    cin.clear();
    cin.ignore(999, '\n');
    cout << "Input numbers only" << endl;
}

///main meny function
void mainMenu(){
    cout << "Select [1-3] or [0] to exit" << endl;
    cout << "[1] Prime Palindromes" << endl;
    cout << "[2] Dynamic Histogram" << endl;
    cout << "[3] Student Record Management" << endl;
    cout << "[0] To exit" << endl;
}

///student menu function
void studentMenu(){
    cout << endl;
    cout << "Select an option: " << endl;
    cout << "[1] Add student" << endl;
    cout << "[2] Delete student" << endl;
    cout << "[3] Update student score" << endl;
    cout << "[4] Find highest scoring student" << endl;
    cout << "[5] Display all students" << endl;
    cout << "[0] Exit" << endl;

}

///student data structure
struct Student {
    int id;
    string name;
    int age;
    float score;
};

///function to add a student
void addStudent(Student *students, int *n) {
    cout << "Enter student ID: ";
    int id;
    cin >> id;

    cout << "Enter student name: ";
    string name;
    cin >> name;

    cout << "Enter student age: ";
    int age;
    cin >> age;

    cout << "Enter student score: ";
    float score;
    cin >> score;

    Student newStudent = {id, name, age, score};
    students[*n] = newStudent;
    (*n)++;

    cout << ">>>>ADDED" << endl;
}

///fucntion to delete a student
void deleteStudent(Student *students, int *n, int id) {
    int i;

    for (i = 0; i < *n; i++) {
        if (students[i].id == id) {
            break;
        }
    }

    if (i == *n) {
        cout << "Student not found" << endl;
        return;
    }

    for (; i < *n - 1; i++) {
        students[i] = students[i + 1];
    }

    (*n)--;

    cout << ">>>>DELETED" << endl;
}

///for loop to update score of the student
void updateStudentScore(Student *students, int *n, int id, float score) {
    int i;
    for (i = 0; i < *n; i++) {
        if (students[i].id == id) {
            students[i].score = score;
            break;
        }
    }

    if (i == *n) {
        cout << "Student not found" << endl;
        return;
    }

    cout << "Updated" << endl;
}

///finding the ID of the highest scorer
void findHighestScoreStudent(Student *students, int n) {
    float highestScore = 0.0;
    int highestScoreStudentId = -1;


    for (int i = 0; i < n; i++) {
        if (students[i].score > highestScore) {
            highestScore = students[i].score;
            highestScoreStudentId = students[i].id;
        }
    }

    if (highestScoreStudentId == -1) {
        cout << "No students found" << endl;
        return;
    }

    cout << "Highest scoring student ID #: "  <<highestScoreStudentId  <<endl;
}

///displaying all the added student
void displayStudents(Student *students, int n) {
    for (int i = 0; i < n; i++) {
        cout << "ID: " << students[i].id << ", Name: " << students[i].name << ", Age: " << students[i].age << ", Score: " << students[i].score << endl;
    }
}

///dynamic histogram function
void dynamicHistogram() {
    int userInput;
    int sum = 0;
///user input
    while (!(cin >> userInput)) {
        errorValidation();
    }
    int num[userInput];

///user numbers input
    for (int i = 0; i < userInput; i++) {
        while (!(cin >> num[i])) {
            errorValidation();
        }
    }
}


int main() {
    int n = 0;
    Student *students = new Student[100000];
    int choose;
    mainMenu();


    cout << "\nInput numbers: ";
    while (!(cin >> choose)) {
        errorValidation();
    }

    if (choose == 1) {
        cout << "Not done";
    } else if (choose == 2) {
        cout << ">>>>>Dynamic Histogram<<<<<" << endl;

        ///dynamic histogram function
        dynamicHistogram();

    } else if (choose == 3) {
        cout << ">>>>>Student Record Manegement<<<<<" << endl;

        while (true) {
            studentMenu();
            cout << "\nChoose [1-5] or [0] to exit: ";
            int choose;

            while (!(cin >> choose)) {
                errorValidation();
            }

            if (choose == 1) {
                addStudent(students, &n);
            } else if (choose == 2) {
                cout << "Enter student ID: ";
                int id;
                cin >> id;
                deleteStudent(students, &n, id);
            } else if (choose == 3) {
                cout << "Enter student ID: ";
                int id;
                cin >> id;
                cout << "Enter new score: ";
                float score;
                cin >> score;
                updateStudentScore(students, &n, id, score);
            } else if (choose == 4) {
                findHighestScoreStudent(students, n);
            } else if (choose == 5) {
                displayStudents(students, n);
            } else if (choose == 0) {
                break;
            }
        }
    } else if (choose == 0) {
        cout << "Thank youuu " << endl;
    }

    char continueChoice;
    cout << "\n\nDo you want to continue? (Y/N): ";
    cin >> continueChoice;
    cout << endl;
    if (continueChoice == 'Y' || continueChoice == 'y') {

        main();

    } else {
        cout << "Exiting the program..." << endl;
    }

    return 0;
}
