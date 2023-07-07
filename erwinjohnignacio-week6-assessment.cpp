#include <bits/stdc++.h>
using namespace std;
//=========================================problem separator=========================================
int isPalindrome(int a){
    int reverse = 0;
    for(int b = a; b>0;b/=10){
        reverse = reverse*10 + b%10;
    }
    return (a==reverse);
}

bool isPrime(int a,int r) {
    int counter=0;
 for(int start=1;start<=r;start++){
     if (a % start==0){
         counter+=1;
     }
 }
    if (counter == 2){
        return true;
    }
    else {
        return false;
    }
}
void checkPalindrome(int n, int r){
    for(int a=n;a<r;a++){
        if(isPalindrome(a) && (isPrime(a,r)==true)){
            cout<<a<<" ";
        }
    }
}
void prime_palindrome(){
    int n,r;
    cin>>n>>r;
    checkPalindrome(n,r);
}
//=========================================problem separator=========================================
void dynamic_histogram(){
    int n,output,new_output=0,multiplier=1;
    cin>>n;
    vector<int> arr(n);
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    for(int a=0;a<n;a++){
        if(arr[a]+1 >= arr[a+1] || arr[a+1]-1 <= arr[a]){
         multiplier=+1;
         output = arr[a]*2;
         if(new_output<output){
             new_output = output;
         }
        }
    }
    cout<<new_output;
}
//=========================================problem separator=========================================
struct Student{
    string name;
    int age;
    double score;
};

void student_record(){
    vector<int>id;

    int menu;
    cout<<endl;
    cout<<"1.) Add Student Record"<<endl;
    cout<<"2.) Delete Student Record"<<endl;
    cout<<"3.) Update Scores"<<endl;
    cout<<"4.) Display the highest student"<<endl;
    cout<<"5.) Display all the record"<<endl;
    switch(menu){
    }

}
int main(){
    int choice;
    cout<<"1. Prime Palindromes"<<endl;
    cout<<"2. Dynamic Histogram"<<endl;
    cout<<"3. Student Record Management"<<endl;
    cout<<"Choose: ";
    cin>>choice;
    switch(choice){
        case 1:
            prime_palindrome();
            break;
        case 2:
            dynamic_histogram();
            break;
        case 3:
            student_record();
            break;
    }
    return 0;
}