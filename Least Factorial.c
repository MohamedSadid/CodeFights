int leastFactorial(int n) {
    int i, res = 1;
    
    for (i = 2; i < n; i++) {
        if (res >= n) {
            break;
        } else {
            res *= i;   
        }
    }
    return res;
}
