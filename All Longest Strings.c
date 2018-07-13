arr_string allLongestStrings(arr_string inputArray) {
    int max = strlen(inputArray.arr[0]);
    char *res[] = {};
    int i, j;
    
    for (i = 1; i < inputArray.size; i++) {
        if (strlen(inputArray.arr[i]) > max)
            max = strlen(inputArray.arr[i]);
    }
    
    
    j = 0;
    for (i = 0; i < inputArray.size; i++) {
        if (strlen(inputArray.arr[i]) == max) {
            *(res + j) = *(inputArray.arr + i);
            j++;
        }
    }

    return res;
    
}
