#define MAX 1000
#include <iostream>
#include <vector>
using namespace std;
//Global Variables
unsigned int  l, r, n, arrInt[MAX], arrPrime[MAX], arrSum[MAX];
unsigned int* arrPtr = &arrInt[0];
//Declaration of arrays/vectors
//Function Prototypes
void invalidInput();
unsigned int numInp(unsigned int num, int minVal, int maxVal);
void primePalindrome();
void dynamicHistogram();
//Driver Code
int main() {
    primePalindrome();
    dynamicHistogram();
    return 0;
}
void primePalindrome() {
    /*  Problem 1: Prime Palindromes
     * Instructions:
     * Write a C++ program to perform the following task:
     * Given a range of integers from l to r, find the prime palindromes within that range.
     *
     * Conditions:
     *
     * l and r should be positive integers, and 1 ≤ l ≤ r ≤ 10^5.
     * A prime palindrome is a number that is both a prime number and a palindrome.
     * A prime number has exactly two distinct divisors: 1 and itself.
     * A palindrome is a number that remains the same when its digits are reversed.
     *
     * Sample Input:
     *
     * 100 200
     *
     * Sample Output:
     *
     * 131 151 181 191
     * */
    unsigned int* leftPtr = &l;
    unsigned int* rightPtr = &r;
    *leftPtr = numInp(l, 1, 100000);//User input for l
    while (true) {//User input validation for r
        *rightPtr = numInp(r, 1, 100000);//User input for r
        if (*rightPtr < *leftPtr) {//Checks constraint that l is lower than or equal to r
            cout << "You entered: " + to_string(*rightPtr) + ". Your l is greater than r.\n";
            invalidInput();
            continue;
        }
        break;
    }
    for (unsigned int i = *leftPtr, j = 0; i <= *rightPtr; i++, j++) {//Create an array within the inclusive range of l to r
        arrInt[j] = i;
    }
}
void invalidInput() {
    cin.clear();
    cin.ignore(512, '\n');
    cout << "Input Here: ";
}
unsigned int numInp(unsigned int num, int minVal, int maxVal) {
    while (true) {
        cin >> num;
        if (!cin >> num || num < minVal || num > maxVal) {
            cout << "You entered: " + to_string(num) + '\n';
            cout << "Try again starting here: " + to_string(num) + '\n';
            invalidInput();
            continue;
        }
        break;
    }
    return num;
}
void dynamicHistogram() {
    unsigned int* length = &n;//Pointer to unsigned int assignment
    unsigned int *c = &arrPtr[0];//Pointer to pointer assignment
    int currentSum = 0;
    *length = numInp(n, 1, 1000000);//User input for n
    for (int i = 0; i < *length; i++) {
        *(arrPtr + i) = numInp(*c, 0, 1000000000);
    }
    for (int i = 0; i < *length - 2; i++) {
        for (int j = 0; j < 1; j++) {
                currentSum += abs((int)(arrInt[i] - arrInt[i + 1]));
                cout << currentSum << " ";
        }
    }

    /*  Problem 2: Dynamic Histogram
     *
     * Instructions:
     *
     * Write a C++ program to create a dynamic histogram as follows:
     *
     * Given an array of non-negative integers, where each integer represents the height of a vertical
     * line on the histogram. The distance between each pair of adjacent lines is exactly 1 unit.
     * The task is to find the maximum possible area of the histogram.
     *
     * Conditions:
     *
     * The length of the array is in the range [1, 10^6].
     * Each integer in the array is in the range [0, 10^9].
     *
     * Sample Input:
     *
     * 6
     * 2 1 5 6 2 3
     *
     * Sample Output:
     * 10
     * */

}