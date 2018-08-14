int max(int, int);
int min(int, int);

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourMax = max(yourLeft, yourRight);
    int yourMin = min(yourLeft, yourRight);
    
    int friendsMax = max(friendsLeft, friendsRight);
    int friendsMin = min(friendsLeft, friendsRight);
    
    return (yourMax == friendsMax) && (yourMin == friendsMin);
}

int max(int num1, int num2) {
    return (num1 > num2) ? (num1) : (num2);
}

int min(int num1, int num2) {
    return (num1 > num2) ? (num2) : (num1);
}
