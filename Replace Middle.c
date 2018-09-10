arr_integer replaceMiddle(arr_integer arr) {
    int res;
    if ((arr.size % 2) == 0) {
        res = arr.arr[(arr.size / 2) - 1] + arr.arr[(arr.size / 2)];
        arr.arr[(arr.size / 2) - 1] = res;
        
        for (int i = (arr.size / 2); i < arr.size - 1; i++) {
            arr.arr[i] = arr.arr[i + 1];
        }
        arr.size--;
    }
    
    return arr;
}