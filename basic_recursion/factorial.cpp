#include <iostream>
using namespace std;

long long factorial(int n) {
    // Base Case: Factorial of 0 or 1 is 1
    if (n == 0 || n == 1) return 1;

    // Recursive Step: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial: " << factorial(n) << endl; // Output: 120
    return 0;
} 