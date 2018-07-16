
int arrayPacking(arr_integer a) {
    int result = 0;
    int i;
    
    for (i = 0; i < a.size; i++) {
        result += (a.arr[i] << (8 * i));
    }
    
    return result;
    
}