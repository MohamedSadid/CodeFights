bool isIPv4Address(char * inputString) {

   const char s[2] = ".";
   char *token;
   char *charPart;
   int so;
   int demcham = 0;
   
   
   // number of dots == 3 //
   for(int i = 0; i < strlen(inputString); i++) {
      if(inputString[i]=='.') demcham++;
   }
   if(demcham != 3) return false;
   // number of dots == 3 //
   
   
   // check if there is more than 1 consecutive dots //
   for(int i = 0; i < strlen(inputString); i++) {
      if(inputString[0] == '.' || inputString[i] == '.' && inputString[i + 1] == '.'){
         return false;
      }
   }
   // check if there is more than 1 consecutive dots //
    
   token = strtok(inputString, s);
   while (token != NULL) {
      
      so = atoi(token);
      if(so < 0 || so > 255) return false;
      
      so = strtol(token, &charPart, 10);
      if (strlen(charPart) != 0) return false;
      
      token = strtok(NULL, s);
   }
   return true;
}