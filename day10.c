// Read a string and check if it is a palindrome using two-pointer comparison
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i = 0, j;
    printf("Enter string: ");
    scanf("%s", str);
    j = strlen(str) - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            printf("Not a Palindrome");
            return 0;        }        i++;
        j--;    }
    printf("Palindrome");
    return 0; }
