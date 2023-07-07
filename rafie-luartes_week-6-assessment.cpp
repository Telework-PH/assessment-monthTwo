#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void clear() {
#if __MAC__
    system{"clear"};
#else
    system("cls");
#endif
}

string toLow(const string &str) {
    string nstr;
    for (char c: str) nstr += char(c >= 65 and c <= 90 ? c + 32 : c);
    return nstr;
}

void displayVector(const vector<int> &v) {
    for (int num: v) {
        cout << num << " ";
    }
    cout << endl;
}

vector<int> primePalindrome(int from, int to) {
    vector<int> palindromes;

    for (int i = from; i <= to; ++i) {
        if (i % 2 == 0 or i % 3 == 0 or i % 5 == 0 or i % 7 == 0 or i % 11 == 0 or i % 13 == 0 or i % 17 == 0) continue;
        string text = to_string(i);
        bool isPalindrome = true;
        for (int ii = 0; ii < text.length() / 2; ++ii) {
            if (text[ii] != text[text.length() - 1 - ii]) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) palindromes.push_back(i);
    }

    return palindromes;
}

/*
  counting the x's
  
  x x x | x x
  x x | | x x
  x x | | x x
  x x | | x |
  | x | | | |
  | | | | | |
 */

int dynamicHistogram(const vector<int> &v) {
    int maxElement = *max_element(v.begin(), v.end());
    int max = INT_MIN;
    int sum = 0;
    for (int num : v) {
        sum += maxElement - num;
        if (max < sum) max = sum;
        if (num == maxElement) sum = 0;
    }
    return max;
}

struct RecordManagement {
    struct Student {
        int ID;
        string Name;
        int Age;
        double Score;

        Student(int id, string name, int age, double score) {
            ID = id;
            Name = std::move(name);
            Age = age;
            Score = score;
        }
    };

    vector<Student> students;

    void Add() {
        int id;
        string name;
        int age;
        double score;
        cin >> id >> name >> age >> score;
        students.emplace_back(id, name, age, score);
        cout << "Added" << endl;
    }

    void Update() {
        int id;
        double score;
        cin >> id >> score;
        for (Student &student: students) {
            if (student.ID == id) {
                student.Score = score;
                cout << "Updated" << endl;
                break;
            }
        }
    }

    void Delete() {
        int id;
        cin >> id;

        for (int i = 0; i < students.size(); ++i) {
            if (students[i].ID == id) {
                students.erase(students.begin() + i);
                break;
            }
        }
        cout << "Deleted" << endl;
    }

    void Highest() {
        int id;
        double maxScore = INT_MIN;
        for (const Student &student: students) {
            if (maxScore < student.Score) {
                id = student.ID;
                maxScore = student.Score;
            }
        }
        for (const Student &student: students) {
            if (student.ID == id) {
                cout << student.Name << " " << setprecision(1) << fixed << student.Score << endl;
                break;
            }
        }
    }

    void Display() {
        for (const Student &student: students) {
            cout << "ID: " << student.ID << ", Name: " << student.Name << ", Age: " << student.Age << ", Score: "
                 << setprecision(1) << fixed << student.Score << endl;
        }
    }
};

void menu() {
    cout << " 1 Prime Palindromes" << endl;
    cout << " 2 Dynamic Histogram" << endl;
    cout << " 3 Student Record Management" << endl;
    cout << " 0 Exit" << endl;
    cout << ">";
    int menu;
    cin >> menu;

    cout << endl << endl;
    if (menu == 0) exit(0);
    else if (menu == 1) {
        cout << "Prime Palindromes" << endl << endl;
        int from;
        int to;
        cin >> from >> to;
        displayVector(primePalindrome(from, to));
    } else if (menu == 2) {
        cout << "Dynamic Histogram" << endl << endl;
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
        cout << dynamicHistogram(numbers) << endl;
    } else if (menu == 3) {
        cout << "Student Record Management" << endl << "Type 'back' to go back in the menu" << endl << endl;
        RecordManagement recordManagement;
        string command;
        while (cin >> command) {
            if (toLow(command) == "back") break;
            else if (toLow(command) == "add") recordManagement.Add();
            else if (toLow(command) == "update") recordManagement.Update();
            else if (toLow(command) == "delete") recordManagement.Delete();
            else if (toLow(command) == "highest") recordManagement.Highest();
            else if (toLow(command) == "display") recordManagement.Display();
            cout << endl;
        }
    }
}

int main() {
    clear();
    menu();

    cout << endl << endl << "Enter ANY key to continue, x to exit : ";
    string cont;
    cin.ignore();
    getline(cin, cont);

    if (toLow(cont) == "x") exit(0);
    cout << endl << endl;
    main();
    return 0;
}
