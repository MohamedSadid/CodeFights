#include <stdio.h>
#include <stdlib.h>

char * reverseParentheses(char * s) {
    int i, find, lastLeftParenIndex;
    int firstRightParenIndex;
    int leftIndex, rightIndex;
    int temp;

    // First Left Parentheses //
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '(') {
            find = i;
            break;
        }
    }
    // First Left Parentheses //

    while (s[find] == '(') {

        // First Left Parentheses //
        i = (strlen(s) - 1);
        while (s[i] != '(') {
            i--;
        }
        lastLeftParenIndex = i;
        leftIndex = lastLeftParenIndex; // save the value of the left index //
        // First Left Parentheses //


        // First Right Parentheses //
        while (s[i] != ')') {
            i++;
        }
        firstRightParenIndex = i;
        rightIndex = firstRightParenIndex; // save the value of the right index //
        // First Right Parentheses //

        // reverse the elements withing the parentheses //
        firstRightParenIndex--; // index of last element before the first right paren //
        lastLeftParenIndex++; // index of first element after the last left paren //
        while (lastLeftParenIndex < firstRightParenIndex) {
            temp = s[lastLeftParenIndex];
            s[lastLeftParenIndex] = s[firstRightParenIndex];
            s[firstRightParenIndex] = temp;

            lastLeftParenIndex++;
            firstRightParenIndex--;
        }
        // reverse the elements withing the parentheses //


        // Delete the parentheses //
        for (i = leftIndex; i < (strlen(s) - 1); i++) {
            s[i] = s[i + 1];
        }
        s[i] = '\0'; // replace the last element with a null character //

        for (i = (rightIndex - 1); i < (strlen(s) - 1); i++) {
            s[i] = s[i + 1];
        }
        s[i] = '\0';
        // Delete the parentheses //
    }

    return s;

}
