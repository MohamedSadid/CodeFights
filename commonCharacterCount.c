void arrange(char *);

int commonCharacterCount(char * s1, char * s2) {
    
    int i, j, k;
    int counter = 0;
    int len2 = strlen(s2);
    int len1 = strlen(s1);
    char arr[len1];
    
    
    arrange(s1);
    arrange(s2);
    
    
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            if (s1[i] == s2[j]) {
                counter++;
                
                for (k = j; k < (len2 - 1); k++) {
                    s2[k] = s2[k + 1];
                }
                
                break;
            }
        }
        
    }
    
    return counter;
}

void arrange(char *s) {
    int i, j;
    unsigned char x;
    int len = strlen(s);
    
    for (i = 0; i < len; i++) {
        for (j = (i + 1); j < len; j++) {
            if (s[j] < s[i]) {
                x = s[i];
                s[i] = s[j];
                s[j] = x;
            }
        }
    }
}