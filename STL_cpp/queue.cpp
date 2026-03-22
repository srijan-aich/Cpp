#include <bits/stdc++.h>
using namespace std;

void explainQueue() {

    queue<int> q;

    q.push(1);      // {1}
    q.push(2);      // {1, 2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  // {1, 2, 9}

    cout << q.back() << endl;  // 9

    cout << q.front() << endl; // 1

    q.pop(); // removes front → {2, 9}

    cout << q.front() << endl; // 2
}

int main() {
    explainQueue();
}

// Demonstrates the usage of queue in C++.