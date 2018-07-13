int shapeArea(int n) {
    int side = n + (n - 1);
    int area = side * side;
    int i, j;
    int removedSquares = 0;
    
    j = 1;
    for (i = 0; i < (n - 1); i++) {
        removedSquares += (side - j);
        j += 2;
    }
    removedSquares *= 2;
    
    return (area - removedSquares);
    
}
