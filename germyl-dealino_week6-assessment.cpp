#include <iostream> 
#include <limits> 
#include <limits.h> 
#include <regex> 

using namespace std;

void invalidIn(){
		cin.clear();
        cin.ignore(99999,'\n');
        cout << "Invalid Input" << endl;
}


struct Student {
    string name;
    int id;
    int age;
    float score;

  
} janrex, james, jonas;



void primePalindroms(){
      
    int numbers[2];
    
	for(int i=0; i<2; i++){
			while(!(cin >> numbers[i])){
			invalidIn();
			}
	}	
}


void dynamicHistogram(){
     int n;
	while(!(cin >> n) ){
       invalidIn();
	}
	int numbers[n];
	
	for(int i=0; i<n; i++){
			while(!(cin >> numbers[i])){
			invalidIn();
			}
	}	
}


void studentRecord(){
    
    
    
    

       janrex = {.name = "janrex,",
                .id = 1,
                .age= 21,
                .score=90.5};
        james= {"James", 1, 21, 90.5};
        james={.name= "jonas", .id =1, .age=21, .score=90.5};
  

  
//List of students
    vector<Student> students;
  students.push_back(janrex);  
  students.push_back(james);
    
 for (Student student: students) {
        
        cout << "ID: " << student.id <<" " << "Name: " << student.name << " ";
        cout << "Age:" << student.age << " ";
        cout << "Score:" <<  student.score << endl;
        
 }    

}

int main() {
  
    string choose;
	cout << "1. Prime Palindomes 2. Dynamic Histogram 3. Student Record" << endl;
	cout << "choose: ";
	cin >> choose;

	if (choose == "1"){
		system("cls");
		primePalindroms();
	}
	else if (choose == "2"){
		system("cls");
		dynamicHistogram();
	
	}
	else if (choose == "3"){
		system("cls");
		studentRecord();
	}
	return 0;
}
