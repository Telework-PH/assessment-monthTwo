# Week 6 Assessment - July 07, 2023
## Allotted Time: 2 hours
## Seating arrangement: 1 sit apart
### No checking of code on the internet.
### Non-submission will have a sanction.


For submitting the code, combined the three coding challenges in one codebase using functions.

- Create a selection that will show the two problems

- Example output
```
Select one problem to run:
1. titleOfProblem
2. titleOfProblem
3. titleOfProblem
```


<details>

**Problem 1: Prime Palindromes**

Instructions:

Write a C++ program to perform the following task:

* Given a range of integers from L to R, find the prime palindromes within that range.

Conditions:

1. L and R should be positive integers, and 1 ≤ L ≤ R ≤ 10^5.
2. A prime palindrome is a number that is both a prime number and a palindrome. A prime number has exactly two distinct divisors: 1 and itself. A palindrome is a number that remains the same when its digits are reversed.

Sample Input:

    100 200

Sample Output:

    101 131 151 181 191

Explanation:

Within the range of 100 to 200, the numbers 101, 131, 151, 181, and 191 are both prime and palindrome. 


**Problem 2: Dynamic Histogram**

Instructions:

Write a C++ program to create a dynamic histogram as follows:

* Given an array of non-negative integers, where each integer represents the height of a vertical line on the histogram. The distance between each pair of adjacent lines is exactly 1 unit.
* The task is to find the maximum possible area of the histogram.

Conditions:

1. The length of the array is in the range [1, 10^6].
2. Each integer in the array is in the range [0, 10^9].

Sample Input:

    6
    2 1 5 6 2 3

Sample Output:

    10

Explanation:

The largest rectangle is shown in the shaded area, which has an area = 10 unit squares.

**Problem 3: Student Record Management**

Instructions:

Write a C++ program to manage the records of students using structures. Implement the following features:

* Add a student record (ID, Name, Age, Score).
* Delete a student record based on ID.
* Update the score of a student based on ID.
* Display the highest scoring student.
* Display all records.

Conditions:

1. ID, Name, Age, and Score are the attributes of the student record.
2. ID is a unique integer for each student and in the range [1, 10^6].
3. Age is an integer and in the range [1, 150].
4. Score is a float and in the range [0.0, 100.0].
5. Name is a string of at most 100 characters long.

Sample Input:

    Add 1 "John" 21 90.5
    Add 2 "Alice" 22 85.0
    Update 1 95.0
    Highest
    Display
    Delete 2
    Display

Sample Output:

    Added
    Added
    Updated
    John 95.0
    ID: 1, Name: John, Age: 21, Score: 95.0
    ID: 2, Name: Alice, Age: 22, Score: 85.0
    Deleted
    ID: 1, Name: John, Age: 21, Score: 95.0

Explanation:

Two students were added with their details. The score of John was updated to 95.0. John has the highest score. Displaying all records shows both students. After deleting Alice's record, only John's record is displayed.


</details>




