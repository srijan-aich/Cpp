deque<int> dq;

dq.push_back(1);     // {1}
dq.emplace_back(2);  // {1, 2}

dq.push_front(4);    // {4, 1, 2}
dq.emplace_front(3); // {3, 4, 1, 2}

dq.pop_back();       // {3, 4, 1}
dq.pop_front();      // {4, 1}

// rest functions similar to vector
// begin, end, insert, size, clear, swap

// hybrid of vector and list, allows fast insertion and deletion at both ends, but also allows random access.
