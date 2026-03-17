#include<bits/stdc++.h>
using namespace std;

void printname(string name) {
    cout<<"My name is "<< name << endl;

}

int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    printname(name);

    string name2;
    cout<<"Enter your friend's name: ";
    cin >> name2;
    printname(name2);

    return 0; 
} 