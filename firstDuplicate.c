int firstDuplicate(arr_integer a) {
    int arr[100001] = {0};
    int flag = -1;
    
    for (int i = 0; i < a.size; i++) {
        
        if (arr[a.arr[i]]) {
            flag = a.arr[i];
            break;
        }
        
        arr[a.arr[i]]++;
    }
    
    return flag;
}
