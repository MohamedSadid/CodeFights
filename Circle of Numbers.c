int circleOfNumbers(int n, int firstNumber) {
    int distance = 360 / n;
    int res = (firstNumber + (180 / distance));
    
    if (res == n) {
        return 0;
    } else {
        return (res > n) ? (res - n) : (res);   
    }
}
