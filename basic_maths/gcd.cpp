int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    
    // One of them has become 0. The one that is NOT 0 is the GCD.
    if (a == 0) return b;
    return a;
}