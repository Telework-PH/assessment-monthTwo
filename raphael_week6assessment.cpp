#include <iostream>
#include <vector>
using namespace std;

struct Student{
    int id;
    int age;
    float score;
    string name;
};

int main() {

    vector<Student> records;

    Student info1;
    cout << "ID: ";
    cin >> info1.id;
    cout << "Name: ";
    cin >> info1.name;
    cout << "Age: ";
    cin >> info1.age;
    cout << "Score: ";
    cin >> info1.score;

    records.push_back(info1);

    int update;
    cout << "Update Grade: ";
    cin >> update;
    for (int i = 0; i < records.size(); ++i) {
        if(update == records[i].id){

            records[i].score = 10;
        }
    }

    int num;
    cout << "Delete: ";
    cin >> num;
    for (int i = 0; i < records.size(); ++i) {
        if(num == records[i].id){
            records.erase(records.begin(),records.end());
        }
    }


    for (int i = 0; i < records.size(); ++i) {
        cout << records[i].id << " " << records[i].name << " " << records[i].age << " " << records[i].score << " ";
    }

    return 0;

}
