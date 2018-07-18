#include <math.h>

int convertToBin(int);

int secondRightmostZeroBit(int n) {
    
    int nDigits = floor(log10(abs(convertToBin(n)))) + 1;
    int a = 1, i, b = 1, count = 0;

    for (i = 0; i < nDigits; i++) {
        if (!(a & n)) {
            count++;
        }
        if (count == 2) break;
        b <<= 1;
        n >>= 1;
    }
    return 1;
}

int convertToBin(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 2 + 10 * convertToBin(num / 2));
    }
}