#include <iostream>
#include <limits>
#include <random>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	int studentID;
	string name;
	int age;
	float score;
}	;

vector<string> addStudent (Student info, vector<string> records);
void displayRecords (vector<vector<string>> records);
void highestGrade (vector<vector<string>> records);
vector<vector<string>> updateScore (Student info, vector<vector<string>> records);

int foolProof (const string& prompt) {
	int userInput;
	while (!(cin >> userInput)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Must input NUMBERS only." << endl;
		cout << prompt;
	}
	return userInput;
}

int main () {
	vector<vector<string>> studentRecords;
	vector<string> oneStudent;
	vector<string> highestGradeStudent;
	Student jim;
	studentRecords.push_back(addStudent(jim, oneStudent));
	Student sarah;
	studentRecords.push_back(addStudent(sarah, oneStudent));
	displayRecords(studentRecords);
	highestGrade(studentRecords);
	studentRecords = updateScore(jim, studentRecords);
	displayRecords(studentRecords);
}

vector<string> addStudent (Student info, vector<string> records) {
	info.studentID = foolProof("");
	records.push_back(to_string(info.studentID));
	getline(cin >> ws, info.name);
	records.push_back(info.name);
	info.age = foolProof("");
	records.push_back(to_string(info.age));
	info.score = foolProof("");
	records.push_back(to_string(info.score));
	return records;
}

void displayRecords (vector<vector<string>> records) {
	int sz = records.size();
	for (auto i = 0; i < sz; i++) {
		int sz2d = records[i].size();
		for (auto j = 0; j < sz2d; j++) {
			cout << records[i][j] << "\t";
		}
		cout << endl;
	}
}

void highestGrade (vector<vector<string>> records) {
	vector<string> thisStudent;
	int max = INT_MIN;
	int sz = records.size();
	int grade;
	for (auto i = 0; i < sz; i++) {
		grade = stoi(records[i][3]);
		if (grade > max) max = grade;
	}
	for (auto i = 0; i < sz; i++) {
		if (grade == stoi(records[i][3]))
			cout << records[i][1] << "\t" << grade << endl;
	}
}

vector<vector<string>> updateScore (Student info, vector<vector<string>> records) {
	int sz = records.size();
	int ID = info.studentID;
	info.score = foolProof("");
	for (auto i = 0; i < sz; i++) {
		int recordID = stoi(records[i][0]);
		if (ID == recordID) {
			records[i].erase(records[i].begin()+3);
			records[i].insert(records[i].begin()+3, to_string(info.score));
		}
	}
	for (auto i = 0; i < sz; i++) {
		int sz2d = records[i].size();
		for (auto j = 0; j < sz2d; j++) {
			cout << records[i][j] << "\t";
		}
		cout << endl;
	}
	return records;
}