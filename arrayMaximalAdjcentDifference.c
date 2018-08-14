int arrayMaximalAdjacentDifference(arr_integer inputArray) {
    int max = 0;
    int diff;
    for (int i = 0; i < inputArray.size - 1; i++) {
        diff = abs((inputArray.arr[i] - inputArray.arr[i + 1]));
        if (diff > max) max = diff;
    }
    return max;
    
}