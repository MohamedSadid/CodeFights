arr_integer alternatingSums(arr_integer a) {
    int sum1 = 0;
    int sum2 = 0;
    int i;

    for (i = 0; i < a.size; i = i + 2) {
        sum1 += a.arr[i];
    }

    for (i = 1; i < a.size; i = i + 2) {
        sum2 += a.arr[i];
    }
    a.size = 2;
    a.arr[0] = sum1;
    a.arr[1] = sum2;

    return a;
}
