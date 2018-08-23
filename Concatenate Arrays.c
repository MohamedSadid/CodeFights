arr_integer concatenateArrays(arr_integer a, arr_integer b) {
    
    int start = a.size;
    a.size += b.size;
    
    int k = 0;
    for (int i = start; i < a.size; i++) {
        a.arr[i] = b.arr[k];
        k++;
    }
    return a;
}
