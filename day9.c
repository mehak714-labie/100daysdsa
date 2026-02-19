//Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    printf("Enter code name: ");
    scanf("%s", str);
    int len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;    }
    printf("Mirror format: %s", str);
    return 0;}
