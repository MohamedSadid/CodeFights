arr_integer sortByHeight(arr_integer a) {
    
   for (int i = 0; i < a.size - 1; i++) {
        if (-1 == a.arr[i])
            continue;
        for (int j = i + 1; j < a.size; j++) {
            if (-1 == a.arr[j])
                continue;
            if (a.arr[i] > a.arr[j]) {
                int temp = a.arr[j];
                a.arr[j] = a.arr[i];
                a.arr[i] = temp;
            }            
        }
    }
    return a;
}
