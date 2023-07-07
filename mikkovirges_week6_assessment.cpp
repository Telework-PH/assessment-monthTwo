#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

//global variable definition:
bool re_run=true;
int program,
        n=0;

//function prototype:

struct  studentList;

void
        input(),
        prob_1(),
        prob_2(),
        prob_3(),
        cases();

//main function:
int main() {

    cout << "Select one problem to run:" << endl;

    for(int i=0;i<3;i++){
        cout << "Sample Problem #["<<i+1<<"]"<<endl;
    }

    cout << "Exit[0]" << endl;

    do {

        while (!(cin >> program) or program < 0 or program > 3) {
            cin.clear();
            cin.ignore(9999, '\n');
        }
        cases();

    }while(re_run);

    string coder = "arjay virges";
    coder = string(coder.rbegin(), coder.rend());
    cout<<endl<<endl<<"Coder: "<<coder<<endl;

    return 0;
}//end of main function


//user-function definition:

//struct:
struct studentList{
    int     id;
    string name;
    int    age;
    float  score;

}student_info[10];

//pointer functions:


//sample problem section:

void prob_1() {
//unable to finish problem 1
}
void prob_2(){
//unable to finish problem 2
}
void prob_3() {
    vector<studentList> student;
    int id;
    string choice;

    cout<<"choices: add, delete, update, display, highest"<<endl;
    cin>>choice;
    
    if(choice=="add") {
        cout<<"add"<<endl;
        cin>>n;
        for (int i = 1; i < n; i++) {
            student_info[i].id=i;
            getline(cin >> ws, student_info[i].name);
            cin >> student_info[i].age;
            cin >> student_info[i].score;
        }

        for (int i = 1; i < n; i++) {
            student.push_back(student[i]);
            cout<<"Added "<<student.at(i).name<<endl;
        }
    }

    else if(choice=="update"){
        cout<<"update"<<endl;
        float update_score;
        cin>>id;
        cin>>update_score;
        student.at(id).score=update_score;
        cout<<"Updated "<<student.at(id).name<<" "<<student.at(id).score<<endl;
    }

    else if(choice=="delete"){
        cout<<"delete"<<endl;
        cin>>id;
        student.erase(student.begin()+id);
        cout<<"Deleted"<<endl;
    }

    else if(choice=="highest"){
        cout<<"highest"<<endl;
        float max = 0;
        int index=0;
        for (int i = 1; i < n; i++) {
            if (max < student.at(i).score){
                index=i;
                max=student.at(i).score;
            }
            cout<<"Highest: "<<student.at(index).name<<" "<<student.at(index).score<<endl;
        }
    }

    else if(choice=="display"){
        cout<<"display"<<endl;
        for(int i=1;i<n;i++){
            //ID: 1, Name: John, Age: 21, Score: 95.0
            cout<<"ID: "<<student.at(i).id
            <<", Name: "<<student.at(i).name
            <<", Age: "<<student.at(i).age
            <<", Score: "<<student.at(i).score<<endl;
        }
    }
}

void cases(){
    switch (program) {

        case 1:
            prob_1();
            break;
        case 2:
            prob_2();
            break;
        case 3:
            prob_3();
            break;

        case 0:
            re_run=false;
    }
}
//end of user-function definition