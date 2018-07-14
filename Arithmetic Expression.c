bool arithmeticExpression(int a, int b, int c) {
    
    if ((a + b) == c) {
        return true;
    } else if ((a - b) == c) {
        return true;
    } else if ((a * b) == c) {
        return true;
    } else if (((float)a / b) == c) {
        return true;
    } else {
        return false;   
    }
}
