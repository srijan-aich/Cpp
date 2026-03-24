#include <bits/stdc++.h>
using namespace std;

void explainMap() {

    // different map types (only one used at a time)
    map<int, int> mpp;
    // map<int, pair<int,int>> mpp;
    // map<pair<int,int>, int> mpp;

    // inserting values
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // printing map
    cout << "Map elements:\n";
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // accessing values
    cout << "mpp[1]: " << mpp[1] << endl;

    // ⚠️ creates new entry if not present
    cout << "mpp[5]: " << mpp[5] << endl;

    // find existing key
    auto it = mpp.find(3);

    if(it != mpp.end()) {
        cout << "Value of key 3: " << it->second << endl;
    }

    // find non-existing key
    auto it2 = mpp.find(5);

    if(it2 == mpp.end()) {
        cout << "Key 5 not found\n";
    }
}

int main() {
    explainMap();
    return 0;
}