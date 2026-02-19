//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include <stdio.h>
int main() {
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elemnts: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);    }
    if(n <= 0) {
        printf("empty array");
        return 0;    }
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];        }    }
    printf("Unique elements: ");
    for(int k = 0; k <= i; k++) {
        printf("%d ", arr[k]);}
    return 0;}
