// Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
#include <stdio.h>
int main() {
    int a[100], n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;}
    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;   }

