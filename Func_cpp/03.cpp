#include<bits/stdc++.h>
using namespace std;

int maxx(int num1 , int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int num1, num2;
    cin >> num1 >> num2; 
    int maximum = maxx(num1,num2);
    cout << maximum << endl;
    return 0;

} 

/*
#include<bits/stdc++.h>
using namespace std;

MAX is a built in function in c++ which is used to find the maximum of two numbers. It is defined in the <algorithm> header file.
MIN is a built in function in c++ which is used to find the minimum of two numbers. It is defined in the <algorithm> header file.

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = max(num1,num2);
    cout << maximum << endl;
    return 0;
    
} */