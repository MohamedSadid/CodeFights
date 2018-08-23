arr_integer arrayReplace(arr_integer inputArray, int elemToReplace, int substitutionElem) {
    for (int i = 0; i < inputArray.size; i++) {
        if (inputArray.arr[i] == elemToReplace) inputArray.arr[i] = substitutionElem;
    }
    return inputArray;
}