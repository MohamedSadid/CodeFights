#include <math.h>
int length(int);
int additionWithoutCarrying(int param1, int param2) {
    int i;
    int len;
    if (param1 > param2) {
        len = floor(log10(abs(param1))) + 1;    
    } else if (param2 > param1) {
        len = floor(log10(abs(param2))) + 1;
    } else if (param1 == 0 || param2 == 0) {
        len = 0;
    } else {
        len = floor(log10(abs(param2))) + 1;
    }
    printf("%d\n", len);
    int sum[len];
    int arr1[len];
    int arr2[len];
    
    for (i = len - 1; i >= 0; i--) {
        arr1[i] = param1 % 10;
        param1 /= 10;
    }
    
    for (i = len - 1; i >= 0; i--) {
        arr2[i] = param2 % 10;
        param2 /= 10;
    }
    
    for (i = 0; i < len; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    
    for (i = 0; i < len; i++) {
        if (length(sum[i]) > 1) {
            sum[i] = (sum[i] % 10);
        }
        printf("%d\t", sum[i]);
    }
    int res = sum[0];
    
    for (i = 0; i < len -1; i++) {
        res *= 10;
        res += sum[i + 1];
    }
    return res;
}

int length(int num){
    int len = 0;
    while(num > 0) {
        len++;
        num /= 10;
    }
    return len;
}