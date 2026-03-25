#include <bits/stdc++.h>
using namespace std;

void explainMultiMap() {

    multimap<int, int> mmp;

    // inserting values
    mmp.insert({1, 2});
    mmp.insert({1, 5});
    mmp.insert({2, 3});
    mmp.insert({2, 4});

    // printing multimap
    cout << "Multimap elements:\n";
    for(auto it : mmp) {
        cout << it.first << " " << it.second << endl;
    }

    // find (returns first occurrence)
    auto it = mmp.find(1);

    if(it != mmp.end()) {
        cout << "First value for key 1: " << it->second << endl;
    }

    // count (number of elements with key)
    cout << "Count of key 1: " << mmp.count(1) << endl;

    // erase all entries with key = 1
    mmp.erase(1);

    cout << "After erasing key 1:\n";
    for(auto it : mmp) {
        cout << it.first << " " << it.second << endl;
    }
}

int main() {
    explainMultiMap();
    return 0;
}