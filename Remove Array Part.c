arr_integer removeArrayPart(arr_integer inputArray, int l, int r) {
    
    int k = l;
    for (int i = r + 1; i < inputArray.size; i++) {
        inputArray.arr[k] = inputArray.arr[i];
        k++;
    }
    inputArray.size -= (r - l + 1);
    
    return inputArray;
}