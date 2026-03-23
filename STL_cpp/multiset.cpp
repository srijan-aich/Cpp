#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {

    multiset<int> ms;

    // inserting elements
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);   // {1, 1, 1}

    // count occurrences
    cout << "Count of 1: " << ms.count(1) << endl; // 3

    // erase by value (removes ALL)
    ms.erase(1);   // {}

    // insert again
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);  // {1, 1, 1}

    // erase ONE occurrence using iterator
    auto it = ms.find(1);
    ms.erase(it);  // {1, 1}

    // insert more values
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);  // {1, 1, 2, 3, 4}

    // erase range (correct way)
    auto it1 = ms.find(1);  // first 1
    auto it2 = it1;
    advance(it2, 2);        // move 2 steps ahead

    ms.erase(it1, it2);     // removes two 1's

    // print multiset
    cout << "Multiset elements: ";
    for(auto x : ms) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    explainMultiSet();
    return 0;
}