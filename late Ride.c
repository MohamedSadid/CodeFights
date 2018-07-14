int lateRide(int n) {
    if (n >= 0 && n < 60 * 24) {
        int first = n / 60;
        int second = n % 60;
        return (first / 10) + (first % 10) + (second / 10) + (second % 10);
    }
}

