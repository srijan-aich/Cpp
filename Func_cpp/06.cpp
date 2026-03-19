#include<bits/stdc++.h>
using namespace std;

void doSomething(string &s){
    s[0] = 's';
    cout << str << endl;
}

// pass by reference , takes the original not the copy

int main(){ 
    string s = "Srijan";
    doSomething(s);
    cout << s << endl;
    return 0;
}       

// This time s changes ! because we are passing the reference of s to the function doSomething and any changes made to s inside the function affect the original variable s in the main function.
