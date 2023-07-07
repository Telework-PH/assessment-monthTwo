#include <iostream>
#include <vector>

using namespace std;

void invalidInput(){
	cin.clear();
	cin.ignore(99999,'\n');
	cout << "Invalid Input" << endl;
	
}

void challengeOne(){
	cout << "Sorry! Ndi ko po nagawa :(" << endl;
}

void challengeTwo(){
	cout << "Sorry! Ndi ko po nagawa :(" << endl;
}


void challengeThree(){
	int num = 5;//variable declare the size of vector
	
	int i;//variable declare what index needed to remove
	
	
	cout << "Number of students: ";
	while(!(cin >> num)||num >100001 || num <0){//max(1000000) and min(1) range of input
		invalidInput();//warning message if user input invalid data
		cout << "Number of students: ";
		}
	
	vector<string>name(num);
	vector<int>age(num);
	vector<float>score(num);
	vector<int>idNumber(num);
	
	for (int k=0;k<num;k++){//loop of vector getting element
		cout << "\nID Number: ";
		while(!(cin >> idNumber[k])||idNumber[k] >100000 || idNumber[k] <1){//max(1000000) and min(1) range of input
			invalidInput();//warning message if user input invalid data
			cout << "\nID Number: ";
		}	
		cout << "Student Name: ";
		cin >> name[k];
		
		cout << "Age: ";
		while(!(cin >> age[k])||age[k] >150 || age[k] <1){//max(1000000) and min(1) range of input
			invalidInput();//warning message if user input invalid data
			cout << "Age: ";
		}	
		
		cout << "Score: ";
		while(!(cin >> score[k])||score[k] >100 || score[k] <0){//max(1000000) and min(1) range of input
			invalidInput();//warning message if user input invalid data
			cout << "Score: ";
		}	

	}
	
	for (int k=0;k<num;k++){
		cout <<"\nID: "<< idNumber[k] << " Name: " << name[k] << " Age: " <<  age[k] << " Score: " << score[k] << endl;
	}
	
	
	cout << "\nEnter ID Number you want to delete: ";
	while(!(cin >>i)||i >100001 || i <0){//getting the value of int i = index needed to remove
		invalidInput();
	}
	idNumber.erase(idNumber.begin()+i-1);
	name.erase(name.begin()+i-1);
	age.erase(age.begin()+i-1);
	score.erase(score.begin()+i-1);
	
	for (int k=0;k<num-1;k++){//loop to print all remaining element of vector
		cout <<"\nID: "<< idNumber[k] << " Name: " << name[k] << " Age: " <<  age[k] << " Score: " << score[k] << endl;
	}
	cout << endl << endl;
	
	
}


int main(){
	
	int choice;
	
	cout << "July 07, 2023 Activities" << endl << endl;
	for (int i=0;i<3;i++){
		cout << "  [" << i+1 << "]\t"<< "Challenge " << i+1 << endl << endl;
	}
	cout << "  [0]\tExit" << endl << endl;
	cout << "Select (0-3): ";
	while (!(cin>>choice)|| choice >3||choice<0){
		invalidInput();
		cout << "Select (0-3): ";
	}
	if (choice == 1){
		system("cls");
		challengeOne();
	}
	else if (choice == 2){
		system("cls");
		challengeTwo();
	}
	else if (choice == 3){
		system("cls");
		challengeThree();
	}
	else{
		cout << "\nSalamat sa lahat" << endl;
		exit (0);
	}
	system("pause");
	system("cls");
	main();

}