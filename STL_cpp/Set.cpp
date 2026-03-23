#include <bits/stdc++.h>
using namespace std;

void explainSet() {

    set<int> st;

    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // duplicate ignored → {1, 2}
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4}

    // find
    auto it = st.find(3); // points to 3
    auto it2 = st.find(6); // st.end()

    // erase by value
    st.erase(3); // removes 3

    // count
    int cnt = st.count(1); // 1 or 0

    // erase by iterator
    auto it3 = st.find(2);
    st.erase(it3);

    // erase range
    auto it4 = st.find(1);
    auto it5 = st.find(4);
    st.erase(it4, it5); // [first, last)

    // lower_bound & upper_bound
    auto lb = st.lower_bound(2);
    auto ub = st.upper_bound(3);
}

int main() {
    explainSet(); 
}

// Demonstrates the usage of set in C++. 