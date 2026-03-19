#include <iostream>
using namespace std;

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];

    // Taking input
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    doSomething(arr, n);

    // Printing value in main
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}