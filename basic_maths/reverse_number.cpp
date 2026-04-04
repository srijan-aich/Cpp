#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n = n / 10;
    }

    return rev;
}

int main() {
    int n;
    cin >> n;

    cout << reverseNumber(n) << endl;

    return 0;
}