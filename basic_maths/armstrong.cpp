#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dup = n;   // store original number
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + (digit * digit * digit);  // cube of digit
        n = n / 10;  // remove last digit
    }

    if (sum == dup)
        cout << "true";
    else
        cout << "false";

    return 0;
} 