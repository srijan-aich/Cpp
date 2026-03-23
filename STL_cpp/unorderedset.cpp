#include <bits/stdc++.h>
using namespace std;

void explainUSet() {

    unordered_set<int> st;

    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(5);
    st.insert(2); // duplicate ignored

    // printing (order NOT guaranteed)
    cout << "Elements: ";
    for(auto x : st) {
        cout << x << " ";
    }
    cout << endl;

    // find
    auto it = st.find(3);
    if(it != st.end()) {
        cout << "Found: " << *it << endl;
    }

    // erase
    st.erase(3);

    // count
    cout << "Count of 2: " << st.count(2) << endl;

    // size
    cout << "Size: " << st.size() << endl;

    // empty
    cout << "Empty? " << st.empty() << endl;
}

int main() {
    explainUSet();
    return 0;
}