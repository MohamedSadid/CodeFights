int rounders(int n) {
    int len = floor(log10(abs(n))) + 1;
    int arr[len];
    int count = 0;
    int num = 0;
    
    for (int i = len - 1; i >= 0; i--) {
        arr[i] = n % 10;
        n /= 10;
    }
    
    for (int i = len - 1; i > 0; i--) {
        if (arr[i] >= 5) {
            count++;
            arr[i] = 0;
            arr[i - 1] += count;
            i++;
        } else if (arr[i] < 5) {
            arr[i] = 0;
        }
        count = 0;
    }
    
    for (int i = 0; i < len; i++) {
        num = num * 10 + arr[i];
    }
    
    return num;
    
    
}
