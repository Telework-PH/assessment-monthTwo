#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int integerInput(int input){
	while(true){
		cin >> input;
		if(cin.fail()){
			cin.clear();
			cin.ignore(1000,'\n');
			cout << "Invalid ... " << endl;
			continue;
		}else break;
	}
	return input;
}

bool isPrime(int num){
	if(num == 1 ) return false ;
	if(num == 2) return true ;
	int limit = sqrt(num) ;
	for(int i = 2; i <= limit; i++){
		if(num % i == 0) return false ;
	}
	return true;
}

int primePalindrome(int n) {
	if(n >= 8  && n <= 11)
		return 11 ;
	for(int i = 1; i <= 1e5; i++){
		string s = to_string(i) ;
		string t(s.rbegin(), s.rend()) ;
		int val = stoi(s + t.substr(1)) ;
		if(val >= n && isPrime(val))
			return val ;
	}
	return -1 ;
}

void palindromes(){
	cout << endl;
	int l = 0, r = 0;
	l = integerInput(l); 
	r = integerInput(r); 
	int temp = -1;
	for(int i = l; i < r; i++){
		if(isPrime(i) == true){
			if(primePalindrome(i) != temp and primePalindrome(i) <= r ){
				temp = primePalindrome(i);
			cout <<primePalindrome(i) << " ";}
		}
	}
}


void histogram(){
	cout << endl;
	int n;
	n = integerInput(n);
	
	int arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = integerInput(arr[i]);
	}
	
	int largest = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
		  int smallest = INT_MAX;
		  for (int k = i; k <= j; k++) {
			smallest = min(smallest, arr[k]);
		  }
		  largest = max(largest, smallest * (j - i + 1));
		}
	}
	cout << largest;
}

struct Student{
	int id;
	string name;
	int age;
	double score;
};


void addStudent(vector<Student>* student){
	Student stud;
	cin >> stud.id;
	cin >> stud.name;
	cin >> stud.age;
	cin >> stud.score;
	(*student).push_back(stud);
	cout << "Added"<< endl;
}

void updateScore(vector<Student>* student){
	int studId;
	double newScore;
	cin >> studId;
	cin >> newScore;
	for(int i = 0; i < (int)((*student).size()); i++){
		if(studId == (*student)[i].id){
			(*student)[i].score = newScore;
		}
	}
	cout << "Updated"<< endl;
}

void highestStudwnt(vector<Student>* student){
	string nameOfStudent = (*student)[0].name;
	double highestScore = (*student)[0].score;
	for(int i = 0; i < (int)((*student).size()); i++){
		if(highestScore < (*student)[i].score){
			nameOfStudent = (*student)[i].name;
			highestScore = (*student)[i].score;
		}
	}
	cout << nameOfStudent << " " << highestScore << endl;
}

void displayAll(vector<Student>* student){
	for(auto studs: *student){
		cout << "ID: " << studs.id << ", Name: " << studs.name
		<< ", Age: " << studs.age << ", Score: " << studs.score << endl;
	}
}

void deleteStudent(vector<Student>* student){
	int delId;
	cin >> delId;
	for(int i = 0; i < (int)((*student).size()); i++){
		if((*student)[i].id == delId){
			(*student).erase((*student).begin()+i);
		}
	}
	cout << "Deleted"<< endl;
}

void studentRecord(){
	vector<Student> students;
	string action;
	while(true){
		cin>>action;
		if(action == "Add") addStudent(&students);
		else if(action == "Update") updateScore(&students);
		else if(action == "Highest") highestStudwnt(&students);
		else if(action == "Display") displayAll(&students);
		else if(action == "Delete") deleteStudent(&students);
		else if(action == "exit") exit(0);
	}
}

int main(){
	
	int sel;
	cout << "Select one program to run: " << endl;
	cout << "1. Prime Palindromes" << endl;
	cout << "2. Dynamic Histogram" << endl;
	cout << "3. Student Record Management" << endl;
	cout << "0. Exit" << endl;
	cin >> sel;
	switch(sel){
		case 1: palindromes(); break;
		case 2: histogram(); break;
		case 3: studentRecord(); break;
		case 0: exit(0);
	}
	return 0;
}
