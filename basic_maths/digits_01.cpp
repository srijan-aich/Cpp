int count(int n) {
    int cnt = 0;

    while (n > 0) {
        int lastDigit = n % 10; // no use of lastDigit in counting digits , we can remove it and directly do cnt = cnt + 1; in the loop
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
} 

// this will not run , just for understanding the concept of counting digits in a number
