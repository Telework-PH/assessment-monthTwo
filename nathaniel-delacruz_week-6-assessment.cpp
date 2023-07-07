#include <iostream>
#include <vector>
#include <string>

using namespace std;

//  Prime Palindromes

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    string s = to_string(n);
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

vector<int> findPrimePalindromes(int l, int r) {
    vector<int> primePalindromes;
    for (int i = l; i <= r; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            primePalindromes.push_back(i);
        }
    }
    return primePalindromes;
}

// Dynamic Histogram

int maxArea(const vector<int>& heights) {
    int maxArea = 0;
    int currentArea = 0;
    for (int height : heights) {
        currentArea = max(currentArea, 0) + height;
        maxArea = max(maxArea, currentArea);
    }
    return maxArea;
}

//  Student Record Management

struct Student {
    int id;
    string name;
    int age;
    float score;
};

void addStudent(vector<Student> &students, int id, string name, int age, float score) {
    Student student = {id, std::move(name), age, score};
    cout << "Enter the student's id: ";
    cin >> student.id;
    cout << "Enter the student's name: ";
    cin >> student.name;
    cout << "Enter the student's age: ";
    cin >> student.age;
    cout << "Enter the student's score: ";
    cin >> student.score;
    students.push_back(student);
}

void deleteStudent(vector<Student> &students, int id) {
    cout << "Enter the student's id to delete: ";
    cin >> id;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == id) {
            students.erase(students.begin() + i);
            break;
        }
    }
}

void updateStudentScore(vector<Student> &students, int id, float score) {
    cout << "Enter the student's id to update the score: ";
    cin >> id;
    cout << "Enter the new score: ";
    cin >> score;
    for (auto & student : students) {
        if (student.id == id) {
            student.score = score;
            break;
        }
    }
}

Student findHighestScoreStudent(vector<Student> &students) {
    Student highestScoreStudent = students[0];
    for (int i = 1; i < students.size(); i++) {
        if (students[i].score > highestScoreStudent.score) {
            highestScoreStudent = students[i];
        }
    }
    return highestScoreStudent;
}

void displayStudents(vector<Student> &students) {
    for (auto & student : students) {
        cout << "ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << ", Score: " << student.score << endl;
    }
}


int main() {
    int choice;
    cout << "Select one problem to run:" << endl;
    cout << "1. Prime Palindromes" << endl;
    cout << "2. Dynamic Histogram" << endl;
    cout << "3. Student Record Management" << endl;
    cin >> choice;

    if (choice == 1) {
        int L, R;
        cout << "Enter the range (L and R): ";
        cin >> L >> R;
        vector<int> primePalindromes = findPrimePalindromes(L, R);
        cout << "Prime palindromes between " << L << " and " << R << ": ";
        for (int num : primePalindromes) {
            cout << num << " ";
        }
        cout << endl;
    } else if (choice == 2) {
        int n;
        cout << "Enter the number of bars: ";
        cin >> n;
        vector<int> heights(n);
        cout << "Enter the heights of the bars: ";
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }
        int maxAreaResult = maxArea(heights);
        cout << "Maximum area of the histogram: " << maxAreaResult << endl;
    }   if (choice == 3) {
        vector<Student> students;
        string command;
        while (true) {
            cout << "Enter a command: ";
            cin >> command;
            if (command == "add") {
                addStudent(students, 0, "", 0, 0.0);
            } else if (command == "update") {
                int id;
                float score;
                cout << "Enter the student's id to update the score: ";
                cin >> id;
                cout << "Enter the new score: ";
                cin >> score;
                updateStudentScore(students, id, score);
            } else if (command == "delete") {
                int id;
                cout << "Enter the student's id to delete: ";
                cin >> id;
                deleteStudent(students, id);
            } else if (command == "highest") {
                cout << "Highest scoring student: " << findHighestScoreStudent(students).name << endl;
            } else if (command == "display") {
                displayStudents(students);
            }
            else if (command == "exit") {
                break;
            } else {
                cout << "Invalid command." << endl;
            }
        }
    }
    return 0;
}