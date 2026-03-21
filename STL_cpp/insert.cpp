#include <bits/stdc++.h>
using namespace std;

void explainVector2() {

    vector<int> v(2, 100);   // {100, 100}

    v.insert(v.begin(), 300);        // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10);  // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());
    // {50, 50, 300, 10, 10, 100, 100}

    cout << v.size() << endl;

    v.pop_back(); // removes last element

    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};

    v1.swap(v2); // swap contents

    v.clear(); // clears vector

    cout << v.empty(); // 1 (true)
}

