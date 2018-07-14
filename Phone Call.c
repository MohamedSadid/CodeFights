int check(int, int);
int phoneCall(int min1, int min2_10, int min11, int s) {
    int i;
    int mins = 0;
    
    mins += check(s, min1);
    s -= min1;
    
    for (i = 0; i < 9; i++) {
        mins += check(s, min2_10);
        s -= min2_10;
    }
    
    while (s >= 0) {
        mins += check(s, min11);
        s -= min11;
    }
    
    return mins;
}

int check(int s, int min) {
    if (s >= min) {
        return 1;
    } else {
        return 0;
    }
}
