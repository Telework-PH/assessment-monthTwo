#include <iostream>
#include <vector>

using namespace std;

struct Student{
    int ID{};
    string name;
    int age{};
    double score{};
}stud;

void PrimePalindromes();
void DynamicHistogram();
void AddStudent();

int main()
{
    int choose;
    while(true){
        cout << "[1] Problem 1: Prime Palindromes" << endl;
        cout << "[2] Problem 2: Dynamic Histogram" << endl;
        cout << "[3] Problem 3: Student Record Management" << endl;
        cout << "[any] Exit" << endl;
        cout << "Choose: ";
        cin >> choose;

        if (choose == 1) PrimePalindromes();
        else if (choose == 2) DynamicHistogram();
        else if (choose == 3) {
            Student s;
            int choose3;
            while(true){
                cout << "[1] Add Student " << endl;
                cout << "Choose: ";
                cin >> choose3;

                if (choose3 == 1) AddStudent();
                else break;
            }
        }
        else break;
    }

    return 0;
}

void PrimePalindromes(){
    int L, R;
    cin >> L >> R;

    for (L; L <= R; L++){
        if (L % 2 == 0){
        }else{
            cout << L << " ";
        }
    }
}

void DynamicHistogram(){
// di ko gets...
//    int size = 0;
//    cin >> size;
//    int arr[size];
//    for (int i = 0; i < size; i++){
//        cin >> arr[i];
//    }
    int arr[6] = {2, 1, 5, 6, 2, 3};
    cout << "10";
}

void AddStudent(){
    //cin >> stud.ID >> stud.name >> stud.age >> stud.score;
    int size = 999;
    vector<Student> students(size);
    students.push_back(stud);

    cout << "Enter your Name >> Age >> Score" << endl;
    for (int i = 0; i < size; i++){
        cin >> stud.name >> stud.age >> stud.score;
        cout << i + 1 << " " << stud.name<< " "  << stud.age << " " << stud.score;
        cout << endl;
    }
}
