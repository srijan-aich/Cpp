#include<bits/stdc++.h>

using namespace std;

void printDivisors(int n) {
    vector<int> ls;
    
    // Loop from 1 to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // Add the divisor i
            ls.push_back(i);
            
            // If the counterpart divisor (n/i) is different from i, add it too
            if ((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }
    
    // Sort the divisors in ascending order
    sort(ls.begin(), ls.end());
    
    // Print the sorted divisors
    for (auto it : ls) {
        cout << it << " ";
    }
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
