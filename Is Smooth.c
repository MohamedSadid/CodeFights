bool isSmooth(arr_integer arr) {
    if ((arr.size % 2) == 0) {
            if (arr.arr[0] == arr.arr[arr.size - 1]) {
                if (arr.arr[arr.size / 2] + arr.arr[(arr.size / 2) - 1] == arr.arr[0]) {
                    return true;
                }
            }
        } else if ((arr.size % 2) != 0) {
            if (arr.arr[0] == arr.arr[arr.size - 1]) {
                if (arr.arr[arr.size / 2] == arr.arr[0]) {
                    return true;
                }
            }
        }
    return false;
}