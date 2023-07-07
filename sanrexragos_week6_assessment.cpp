#include <iostream>
#include <vector>
using namespace std;

int validate_input(const char msg[], const char err[], int x, int c) {  // validate of int input
    int choice;
    do {
        cout << msg;
        cin >> choice;
        if (cin.fail() || choice < x || choice > c) {
            cin.clear();
            cin.ignore(999, '\n');
            cout << err << endl;
        } else break;
    } while (true);
    return choice;
}

//Prime Palindromes
void problem1(){
    int f, l;
    cin >> f >> l;
    for (int num = f; num <= l; ++num) {
        bool isPrime = true;
        for (int x = 2; x < num; x++){
            if(num % x == 0) {
                isPrime=false;
                break;
            }
        }
        if(isPrime == true) {
            string snum = to_string(num);
            reverse(snum.begin(), snum.end());
            if(snum == to_string(num)) cout << num << " ";
        }
    }
}
//Dynamic Histogram
int max_area_histogram(vector<int> *numbers){
    int max = *max_element(numbers->begin(), numbers->end());
    for (const int n : *numbers) {
        //incomplete
    }
    int maxarea;
    return maxarea;
}
void problem2(){
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int x = 0; x < n; x++) cin >> numbers[x];
    int max = max_area_histogram(&numbers);
    cout << max << endl;
}
//Student Record Management
struct Student{
    int ID;
    string name;
    int age;
    float score;


};
string lowerCase(string txt){
    int s = txt.length();
    for (int i = 0; i < s; ++i)
        txt[i] = tolower(txt[i]);
    return txt;
}
void display(vector<Student> *student){
    if(student->size() == 0){
        cout << "No record" << endl;
    }
    else {
        for (Student stu: *student) {
            cout << "ID: " << stu.ID << ", ";
            cout << "Name: " << stu.name << ", ";
            cout << "Age: " << stu.age << ", ";
            cout << "Score: " << stu.score << endl;
        }
    }
}
void create(vector<Student> *student){
    int ID;
    string name;
    int age;
    float score;
    cin >> ID >> name >> age >> score;
    student->push_back({ID, name, age, score});
    cout << "Added" << endl;
}
void update(Student *student){
    float newScore;
    cin >> newScore;
    student->score = newScore;
    cout << "Updated" << endl;
}
void problem3(){
    vector<Student> student;
    do {
        string name;
        int age;
        float score;
        string action; // add, update, delete, display, exit
        cin >> action;
        if (lowerCase(action) == "add") {
            create(&student);
        }
        else if (lowerCase(action) == "update") {
            int stud_id = -1;
            int ID;
            cin >> ID;
            for (int i = 0; i < student.size(); ++i) {
                if(student[i].ID == ID){
                    update(&student[i]);
                    stud_id = student[i].ID;
                    break;
                }
            }
            if(stud_id == -1) {
                cout << "ID not found" << endl;
                cin.clear();
                cin.ignore(999, '\n');
            }
        }
        else if (lowerCase(action) == "delete") {
            int stud_id = -1;
            int ID;
            cin >> ID;
            for (int i = 0; i < student.size(); ++i) {
                if(student[i].ID == ID){
                    student.erase(student.begin() + i);
                    stud_id = student[i].ID;
                    cout << "Deleted" << endl;
                    break;
                }
            }
            if(stud_id == -1) {
                cout << "ID not found" << endl;
                cin.clear();
                cin.ignore(999, '\n');
            }
        }
        else if (lowerCase(action) == "display") {
            display(&student);
        }
        else if (lowerCase(action) == "exit") {
            break;
        }
        else {
            cout << "x Action not recognized." << endl;
            cin.clear();
            cin.ignore(999, '\n');
        }
    } while (true);
}

int main()
{
    // July 6 coding challenge
    int choice;
    do {
#ifdef _WIN32
        system("cls");
#elif __APPLE__
        #include "TargetConditionals.h"
    #if TARGET_OS_MAC
        system("clear");
    #endif
#endif
        cout << "Select one problem to run:" << endl;
        cout << "1. Prime Palindromes" << endl;
        cout << "2. Dynamic Histogram" << endl;
        cout << "3. Student Record Management" << endl;
        cout << "0. Exit" << endl;
        choice = validate_input("-> ", "invalid", 0, 6);
        cout << "-------------------------------------------\n";
        if (choice == 1) problem1();
        else if (choice == 2) problem2();
        else if (choice == 3) problem3();
        cout << endl;
#ifdef _WIN32
        system("pause");
#elif __APPLE__
        #include "TargetConditionals.h"
    #if TARGET_OS_MAC
        system("read");
    #endif
#endif
    } while(choice != 0);
    return 0;
}
