arr_integer firstReverseTry(arr_integer arr) {
    
    if (arr.size == 0) {
        return arr;
    }
    
    int i = 0;
    int j = arr.size - 1;
    int temp;
    
    temp = arr.arr[i];
    arr.arr[i] = arr.arr[j];
    arr.arr[j] = temp;
    
    return arr;
}
