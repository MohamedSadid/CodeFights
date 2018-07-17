int rangeBitCount(int a, int b) {
    int ones = 0;
    int i;
    for (i = a; i <= b; i++) {
        int t = i;
        while (t != 0) {
            
            if (t & 1 == 1) {
                ones++;
            }
            t >>= 1;
        }
    }
    return ones;
}
