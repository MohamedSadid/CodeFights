int arrMin(int *ptrToArr, int len) {
    int min = ptrToArr[0];
    for (int i = 1; i < len; i++) {
        if (ptrToArr[i] < min) min = ptrToArr[i];
    }
    return min;
}

int arrMax(int *ptrToArr, int len) {
    int max = ptrToArr[0];
    for (int i = 1; i < len; i++) {
        if (ptrToArr[i] > max) max = ptrToArr[i];
    }
    return max;
}

int makeArrayConsecutive2(arr_integer statues) {
    int min = arrMin(statues.arr, statues.size);
    int max = arrMax(statues.arr, statues.size);
    
    int countMissingNums = 0;
    int indicator = 0;
    
    for (int i = (min + 1); i < max; i++) {
        for (int j = 0; j < statues.size; j++) {
            if (statues.arr[j] != i) {
                indicator++;
            }
        }
        if (indicator == statues.size) {
            countMissingNums++;
        }
        indicator = 0;
    }
    
    
    return countMissingNums;
}
