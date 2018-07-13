int countElements(int);

bool isLucky(int n) {
    
    int len = countElements(n);
    int arr[len];
    int i, sum1 = 0, sum2 = 0;
    
    for (i = (len - 1); i >= 0; i--) {
        arr[i] = (n % 10);
        n /= 10;
    }
    
    for (i = 0; i < (len / 2); i++) {
        sum1 += arr[i];
    }
    
    for (i = (len - 1); i >= (len / 2); i--) {
        sum2 += arr[i];
    }
    
    if (sum1 == sum2)
        return true;
    return false;
}



int countElements(int n){
    
    int count = 0;
    
    while (n != 0) {
        n /= 10;
        count++;
    }
    
    return count;
}
