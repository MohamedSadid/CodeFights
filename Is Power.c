int powCalc(int index, int power) {
    int num = index;
    for (int i = 0; i < (power - 1); i++) {
        index *= num;
    }
    return index;
}

bool isPower(int n) {
    
    if (n == 1) return true;
    for (int num = 2; num < (n / 4); num++) {
        for (int power = 2; power < (n / 4); power++) {
            if (powCalc(num, power) == n) {
                return true;
            }
        }
    }
    
    return false;
}