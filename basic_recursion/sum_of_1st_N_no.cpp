#include <iostream>
using namespace std;

int sumOfN(int n) {
    // Base Case: Sum of 0 is 0
    if (n == 0) return 0;

    // Recursive Step: current n + sum of numbers before it
    return n + sumOfN(n - 1);
}

int main() {
    int n = 5;
    cout << "Sum: " << sumOfN(n) << endl; // Output: 15
    return 0;
}