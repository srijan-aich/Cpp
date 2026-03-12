#include<bits/stdc++.h>
using namespace std;

int main(){
    // 2D array
    
    int arr[3][4];

    arr[1][3] = 10;
    cout << arr[2][3] << endl; //garbage value will be printed as we have not initialized the array.
    cout << arr[1][3] << endl; // 10 will be printed as we have assigned 10 to arr[1][3]


    return 0; 

} 