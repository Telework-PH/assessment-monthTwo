#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void runProblemOne(){

    int l, r;
    cin >> l >> r;

    vector<int> nums(r);

    for (int i = 0; i < r; i++) {
        cin >> nums[i];
    }




//    Write a C++ program to perform the following task:
//
//    Given a range of integers from L to R, find the prime palindromes within that range.
//            Conditions:
//
//    L and R should be positive integers, and 1 ≤ L ≤ R ≤ 10^5.
//    A prime palindrome is a number that is both a prime number and a palindrome.
//    A prime number has exactly two distinct divisors: 1 and itself.
//    A palindrome is a number that remains the same when its digits are reversed.
// Sample Input:
//
//    100 200
//    Sample Output:
//
//    101 131 151 181 191
//    Explanation:
//
//    Within the range of 100 to 200, the numbers 101, 131, 151, 181, and 191 are both prime and palindrome.



}

void runProblemTwo(){
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
//    Problem 2: Dynamic Histogram
//    Write a C++ program to create a dynamic histogram as follows:
//
//    Given an array of non-negative integers, where each integer represents the height of a vertical line on the histogram.
//    The distance between each pair of adjacent lines is exactly 1 unit.
//    The task is to find the maximum possible area of the histogram.
//            Conditions:
//
//    The length of the array is in the range [1, 10^6].
//            Each integer in the array is in the range [0, 10^9].
//            Sample Input:
//
//    6
//    2 1 5 6 2 3
//    Sample Output:
//
//    10
//    Explanation:
//
//    The largest rectangle is shown in the shaded area, which has an area = 10 unit squares.

}

struct student {
    int id;
    string name;
    int age;
    int score;
};
void runProblemThree(){
    struct student stud[5];
    int i;

    for(i=0; i<5; i++){
        cout << "Add " << i + 1 << endl;
        cout << "ID: ";
        cin >> stud[i].id;
        cout << "Name: ";
        cin >> stud[i].name;
        cout << "Age: ";
        cin >> stud[i].age;
        cout << "Score: ";
        cin >> stud[i].score;
    }



//    Problem 3: Student Record Management

//    Write a C++ program to manage the records of students using structures. Implement the following features:
//
//    Add a student record (ID, Name, Age, Score).
//            Delete a student record based on ID.
//            Update the score of a student based on ID.
//            Display the highest scoring student.
//            Display all records.
//            Conditions:
//
//    ID, Name, Age, and Score are the attributes of the student record.
//            ID is a unique integer for each student and in the range [1, 10^6].
//            Age is an integer and in the range [1, 150].
//            Score is a float and in the range [0.0, 100.0].
//            Name is a string of at most 100 characters long.
//    Sample Input:
//
//    Add 1 "John" 21 90.5
//    Add 2 "Alice" 22 85.0
//    Update 1 95.0
//    Highest
//            Display
//    Delete 2
//    Display
//    Sample Output:
//
//    Added
//            Added
//    Updated
//    John 95.0
//    ID: 1, Name: John, Age: 21, Score: 95.0
//    ID: 2, Name: Alice, Age: 22, Score: 85.0
//    Deleted
//    ID: 1, Name: John, Age: 21, Score: 95.0
//    Explanation:
//
//    Two students were added with their details. The score of John was updated to 95.0. John has the highest score.
//    Displaying all records shows both students. After deleting Alice's record, only John's record is displayed.

}

void initialize() {
    //runProblemOne();
    //runProblemTwo();
    //runProblemThree();

    cout << "July 7 Week 6 Assessment" << endl;
    cout << "Select one problem to run:" << endl;
    cout << "[1]. Problem 1: Prime Palindromes " << endl;
    cout << "[2]. Problem 2: Dynamic Histogram " << endl;
    cout << "[3]. Problem 3: Student Record Management " << endl;
    cout << "[0]. Exit" << endl;

    int choice;
    bool validChoice = false;
    while (!validChoice) {
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        if (choice >= 1 && choice <= 3) {
            validChoice = true;
        } else {
            cout << "Invalid choice. Please enter a valid choice (1-3)." << endl;
        }
    }

    switch (choice) {
        case 1:
            runProblemOne();
            break;
        case 2:
            runProblemTwo();
            break;
        case 3:
            runProblemThree();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    char continueChoice;
    cout << "\nDo you want to continue? (Y/N): ";
    cin >> continueChoice;

    if (continueChoice == 'Y' || continueChoice == 'y') {
        initialize();
    } else {
        cout << "Exiting the program..." << endl;
    }
}

int main() {
    initialize();
    return 0;
}

