char firstNotRepeatingCharacter(char * s) {
    
    int *count = (int *)calloc(sizeof(int), 256);
    int i;
  
    for (i = 0; *(s + i);  i++)
        count[*(s + i)]++;
     
    for (i = 0; *(s + i);  i++) {
      if (count[*(s + i)] == 1) {
        return *(s + i);
      }   
    }  
   
    free(count); // To avoid memory leak
    return '_';


}
