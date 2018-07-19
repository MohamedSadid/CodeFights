
int differentRightmostBit(int n, int m) {
    
    int temp = 1;
    int count = 0;

    if (m > n) {
        while (m > 0) {

            if ((temp & n) != (temp & m)) {
                break;
            }
            count++;

            n >>= 1;
            m >>= 1;
        }
    } else {
        while (n > 0) {

            if ((temp & n) != (temp & m)) {
                break;
            }
            count++;

            n >>= 1;
            m >>= 1;
        }
    }

    return (1 << count);
}
