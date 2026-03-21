#include <bits/stdc++.h>
using namespace std;

void explainVector() {

    // 1. Basic vector
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // 2. Vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    // 3. Vector with size and value
    vector<int> v1(5, 100);   // {100,100,100,100,100}

    // 4. Vector with size only
    vector<int> v2(5);        // {0,0,0,0,0}

    // 5. Copy vector
    vector<int> v3(v1);       // copy of v1
} 

// This code will not run as it is just a demonstration of vector usage. 
// further code can be the same... 
