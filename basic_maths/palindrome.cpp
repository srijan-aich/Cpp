#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dup = n;   // store original number
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (dup == rev)
        cout << "true";
    else
        cout << "false";

    return 0;
} 