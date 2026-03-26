#include <bits/stdc++.h>
using namespace std;

// custom comparator
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    // if second equal → sort by first descending
    return p1.first > p2.first;
}

void explainExtra() {

    // ----- SORT -----

    int a[] = {5, 2, 8, 1, 3};
    int n = 5;

    sort(a, a + n); // ascending

    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end()); // ascending

    // partial sort
    sort(a + 2, a + 4);

    // descending
    sort(a, a + n, greater<int>());

    // ----- PAIR SORT -----

    pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};

    sort(arr, arr + 3, comp);

    cout << "Sorted pairs:\n";
    for(int i = 0; i < 3; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    // ----- BIT COUNT -----

    int num = 7; // 111 → 3 ones
    cout << "Set bits: " << __builtin_popcount(num) << endl;

    long long num2 = 165786578687;
    cout << "Set bits (ll): " << __builtin_popcountll(num2) << endl;

    // ----- PERMUTATIONS -----

    string s = "123";

    sort(s.begin(), s.end()); // important

    cout << "Permutations:\n";
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}

int main() {
    explainExtra();
    return 0;
}