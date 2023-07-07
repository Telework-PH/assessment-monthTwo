#include <iostream>

using namespace std;
struct Student{

    int iD[2]; // global variable for student record
    string name;
    int age;
    float score;
};

void primePalindromes() {
	
}
void dynamicHistogram() {
	
}
 
void studentRecordManagement() {
	Student students;

    // adding students
    for(int i=0; i < 2; i++){
        cout << "add " ;
        cin >>  students.iD[i] >> students.name >> students.age >> students.score;
        cout << "Added" << endl;
    }



    float highest; // finding the highest score
    float max = 0;
    for (int i = 0; i < 2; i++){
        if (max < students.score){
            highest = i;
            max = students.score;

        }
    }
    //Display the highest scoring student.
    cout << students.name << " " << max << endl;


    //display all records
    for (int i = 0; i < 2; i++) {
        cout << "ID: " << students.iD[i] << " Name: " << students.name << " Age: " << students.age << " Score: "
             << students.score << endl;
    }

    // deleting student id 2
//    for(int i = 0; i < 2; i++) {
//
//    }
    
}


void chooseAnother(){
    char ans;
    cout << "\nDo you want to run another program? y/n : " << endl;
    cin >> ans;

    if (ans == 'N' || ans == 'n') {
        cout << "Exit Program" << endl;
        exit(0);
    }
}
int main(){
	 while(true){
        cout << "Select one problem to run" << endl;
        cout << "[1] Prime Palindromes" << endl;
        cout << "[2] Dynamic Histogram" << endl;
        cout << "[3] Student Record Management" << endl;
        cout << "[4] EXIT" << endl;

        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) {
            case 1:
                primePalindromes();
                break;
            case 2:
                dynamicHistogram();
                break;
            case 3:
                studentRecordManagement();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }

        chooseAnother();
    }
	
	return 0;
}