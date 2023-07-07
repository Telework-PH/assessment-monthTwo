#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isPrime(int n){
        if(n % 2 == 0 && n > 2) return false;
        for(int i = 3; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        return n != 1 && n != 0;
    }
    int primePalindrome(int N) {
        if(8 <= N && N <= 11) return 11;
        for(int i = 1; i < 100000; i++){
            string s = to_string(i);
            string r = s;
            reverse(r.begin(), r.end());
            int num = stoi(s + r.substr(1));
            if(num >= N && isPrime(num)) return num;
        }
struct Student {
    string name;
    int age;
    double score;
};

void challenge3(Student* student){
    int id;
    cin >> id;
    struct Student st[id];

    for (int i=0; i<id; i++)
    {
        cin >> student->name >> student->age >> student->score;

    }
}
int main() {
    Student student;
    int id;
    cin >> id;
    struct Student st[id];

    for (int i=0; i<id; i++)
    {
        cin >> student.name >> student.age >> student.score;
    }

    return 0;
}
