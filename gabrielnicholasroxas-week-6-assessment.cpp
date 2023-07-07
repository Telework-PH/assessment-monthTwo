#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp!= 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return n == rev;
}

void challenge1(){
    int start, end;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            cout << i << " ";
        }
    }

}

void challenge2(){
    int n;
    cin >> n;
    vector<int>area(n);

    for(int i = 0; i < n; i++){
        cin >> area[i];
    }

}

struct Student{

    int x;
    int z;
    float y;
    vector<int>iD;
    vector<string>name;
    vector<int>age;
    vector<float>score;

};

void challenge3() {
    Student student;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Add ";
        cin >> student.iD[i];
        student.iD.push_back(student.iD[i]);
        cin  >> student.name[i];
        student.name.push_back(student.name[i]);
        cin >> student.age[i];
        while(!(cin >> student.age[i]) || student.age[i] < 1 || student.age[i] > 150){
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "Please enter 0 to 100 only." << endl;
        }
        student.age.push_back(student.age[i]);
        while(!(cin >> student.score[i]) || student.score[i] < 0 || student.score[i] > 100){
            cin.clear();
            cin.ignore(99999, '\n');
            cout << "Please enter 0 to 100 only." << endl;
        }
        student.score.push_back(student.score[i]);
    }cout << endl;
    cout << "Update ";
    cin >> student.x;
    cin >> student.y;
    student.score.at(student.x) = student.y;
    cout << "Highest" << endl;
    cout << "Display" << endl;
    cout << "Delete ";
    cin >> student.z;
    cout << "Display" << endl;
    for(int i = 0; i < n; i++){
        cout << "Added" << endl;
    }
    cout << "Updated" << endl;
    for(int i = 0; i < n; i++){
        if(student.score[i] < student.score[i+1]){
            cout << student.name[i] << " " << student.score[i] << endl;
        }
    }
    for(int i = 0; i < n; i++){
        cout << student.iD[i] << " " << student.name[i] << " " << student.age[i] << " " << student.score[i];
        cout << endl;
    }
    int pos = student.z - 1;
    student.iD.erase(student.iD.begin()+pos);
    student.name.erase(student.name.begin()+pos);
    student.age.erase(student.age.begin()+pos);
    student.score.erase(student.score.begin()+pos);
    for(int i = 0; i < n; i++){
        cout << student.iD[i] << " " << student.name[i] << " " << student.age[i] << " " << student.score[i];
        cout << endl;
    }

}

int main() {

    int action;
    cout << "Select one problem to run:" << endl;
    cout << "[0] To Exit." << endl;
    cout << "[1] Prime Palindromes." << endl;
    cout << "[2] Dynamic Histogram." << endl;
    cout << "[3] Student Record Management." << endl;

    cin >> action;
    if (action == 1) {
        challenge1();
    } else if (action == 2) {
        challenge2();
    } else if (action == 3) {
        challenge3();
    }else if (action == 0){
        exit(0);
    }
    return 0;
}
