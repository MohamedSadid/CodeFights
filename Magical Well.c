int magicalWell(int a, int b, int n) {
    int i, res = 0;
    for (i = 0; i < n; i++) {
        res += (a++ * b++);
    }
    return res;
}
