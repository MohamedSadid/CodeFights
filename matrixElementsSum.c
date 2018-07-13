int matrixElementsSum(arr_arr_integer matrix) {
    int i, j, sum = 0;
    int *p;
    p = &matrix.arr[0];
        
    int rows = matrix.size;
    int cols = *p;
    
    
    
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            if (matrix.arr[j].arr[i] == 0)
                break;
            else
                sum += matrix.arr[j].arr[i];
        }
    }
    
    return sum;
        
}
