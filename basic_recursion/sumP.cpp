void sumParameterized(int i, int currentSum) {
    if (i < 1) {
        cout << currentSum;
        return;
    }
    sumParameterized(i - 1, currentSum + i);
}
// Called as: sumParameterized(5, 0); 