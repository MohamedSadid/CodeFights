int appleBoxes(int k) {
    int i, sum1 = 0, sum2 = 0;
    
    for (i = 1; i <= k; i++) {
        if (i % 2 == 0) {
            sum2 += (i * i);
        } else {
            sum1 += (i * i);
        }
    }
    return sum2 - sum1;
}
