#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void problem1(){
    int l,r;
    cin >> l >> r;


    for (int i = 0; i <= r; i++){
        if (l < r){
            l++;
            if (l % 2 != 0 and l % 3 != 0)
                cout << l << " ";
        }
    }

}

void problem2(){
    int input;
    cin >> input;
    int arr[input];
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < length; i++){
        cin >> arr[i];
    }
}

struct Students{
    int id ;
    string name;
    int age;
    float score;
};
void problem3(){
    Students student1, student2;

    cin >> student1.id >> student1.name >> student1.age >> student1.score;
    cin >> student2.id >> student2.name >> student2.age >> student2.score;

    vector<Students> students;
    students.push_back(student1);
    students.push_back(student2);

    for (Students info: students) {
        cout << info.id << " " << info.name << " " << info.age << " " << info.score << endl;


    }
    string update;
    cin >> update;
    if (update == student1.name) {
    }
}

int main() {
    int select;
    while (true) {
        cout << "Select from 1-10, anykey to exit" << endl;
        cout << "[1] Problem 1" << endl;
        cout << "[2] Problem 2" << endl;
        cout << "[3] Problem 3" << endl;
        cin >> select;
        if (select == 1) {
            problem1();
            system("pause");
            system("cls");
        } else if (select == 2) {
            problem2();
            system("pause");
            system("cls");
        } else if (select == 3) {
            problem3();
            system("pause");
            system("cls");
        } else {
            break;
        }
    }
    return 0;
}
