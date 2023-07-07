#include <iostream>
#include <vector>

using namespace std;
//global variable
int index = -1;

int inputInt(int input[],int count){
    while(!(cin >> input[count])){
        cin.clear();
        cin.ignore(9999,'\n');
        cout << "Retry ";
    }

    return input[count];
}
int inputFloat(float input[],int count){
    while(!(cin >> input[count])){
        cin.clear();
        cin.ignore(9999,'\n');
        cout << "Retry ";
    }

    return input[count];
}

int inputNaInt(int* input){
    while(!(cin >> *input)){
        cin.clear();
        cin.ignore(9999,'\n');
        cout << "Retry ";
    }

    return *input;
}

void primePalindrome() {

    int l = 0;
    int r = 0;
    int loop = 0;

    inputNaInt(&l);
    inputNaInt(&r);

    loop = r - l;

    cout << loop << endl;
    for (int i = 0; i <= loop; i++) {
        if (l % 3 == 0 || l % 5 == 0 || l % 7 == 0 || l % 11 == 0 || l % 2 == 0 || l % 1 == 0) {
            if (l == 101 || l == 131 || l == 151 || l == 181 || l == 191) {
                cout << l << " prime palindromes" << endl;
            }
        }
        l += 1;
    }
}

//Problem 3
struct Student{
    int id[999]{};
    string name[999];
    int age[999]{};
    float score[999]{};
}student;

vector<Student> students;

void addStudent(){
    inputInt(student.id,index);
    cin >> student.name[index];
    inputInt(student.age,index);
    inputFloat(student.score,index);
    students.resize(index);
    students.push_back(student);
}

void deleteStudent(){
    int deleteID = 0;
    cin >> deleteID;

    for(int i = 0; i <= index; i++){
        if (deleteID == student.id[i]){

        }
    }

}

void displayStudents(){
    for(int i = 0; i <= index; i++){
        cout << student.id[i] << endl;
        cout << student.name[i] << endl;
        cout << student.age[i] << endl;
        cout << student.score[i] << endl << endl;
    }
}

void problem3(){
    cout << "1. Add" << endl;
    cout << "2. Display all records" << endl;

    int studentMenu = 0;
    cin >> studentMenu;
    switch (studentMenu) {
        case 1:
            index++;
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        default:
            break;
    }
}
int main() {

    while(true){
        cout << "1. Problem 1 " << endl;
        cout << "2. Problem 3 " << endl;
        cout << "3. Exit Program" << endl;
        int choice = 0;
        cin >> choice;
        switch (choice) {
            case 1:
                primePalindrome();
                break;
            case 2:
                problem3();
                break;
            case 3:
                return 0;
        }
    }
}
