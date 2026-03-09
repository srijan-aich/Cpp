#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age:";
    cin >> age;
    if(age < 18){
        cout << "You are not eligible for job" << endl;
    }
    else if(age >= 18 && age < 60){
        cout << "You are eligible for job";
        if(age >= 50){
            cout << ", but retirement soon" << endl; // Nested if statement
        }
    }
    else{
        cout << "Retirement time" << endl;
    }
    return 0;
}