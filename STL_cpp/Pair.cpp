#include <bits/stdc++.h>
using namespace std;

void explainPair() {

    // 1. Simple pair
    pair<int, int> p1 = {1, 3};
    cout << "Simple Pair: " << p1.first << " " << p1.second << endl;

    // 2. Nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << "Nested Pair: " 
         << p2.first << " " 
         << p2.second.first << " " 
         << p2.second.second << endl;

    // 3. Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << "Array Pair (arr[1].second): " << arr[1].second << endl;
}

int main() {
    explainPair();
    return 0;
}