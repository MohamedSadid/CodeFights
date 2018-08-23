arr_integer createArray(int size) {
    arr_integer arra = alloc_arr_integer(size);
    
    arra.size = size;
    
    for(int i = 0; i < size; i++)
        arra.arr[i] = 1;
    return arra;
}