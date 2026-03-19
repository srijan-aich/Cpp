#include<bits/stdc++.h>
using namespace std;

void doSomething(int &num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}

// pass by value 

int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;

} // prints 10, 15, 20, 10 because we are passing the value of num to the function doSomething and any changes made to num inside the function do not affect the original variable num in the main function.