#include <stdio.h>

int main() {
    int n, i, temp;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n > 100) {
        printf("Array size too large");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;

    while(left < right) {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


