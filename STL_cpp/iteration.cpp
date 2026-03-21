#include <bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v = {20, 10, 5, 6, 7};

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";
} 

for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
}

for(auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
} 

for(auto it : v) {
    cout << it << " ";
}

// This code will not run as it is just a demonstration of iterator usage..



