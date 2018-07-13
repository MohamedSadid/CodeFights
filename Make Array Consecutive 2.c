int makeArrayConsecutive2(arr_integer statues) {
    int i, j, x, counter = 0;
    
    for (i = 0; i < (statues.size); i++) {
        for (j = (i + 1); j < (statues.size); j++) {
            if (statues.arr[j] < statues.arr[i]) {
                x = statues.arr[i];
                statues.arr[i] = statues.arr[j];
                statues.arr[j] = x;
            }
        }
    }
    
    int min = statues.arr[0];
    int max = statues.arr[(statues.size) - 1];
    j = 0;
    
    for (i = min; i <= max; i++) {
        if (statues.arr[j] == i) {
            j++;
        } else {
            counter++;
        }
    }
    
    return counter;
    
}
