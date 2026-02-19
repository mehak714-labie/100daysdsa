//Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.
#include <stdio.h>
int main() {
    int n, m, i = 0, j = 0, k = 0;
    printf("Enter size of 1st log: ");
    scanf("%d", &n);
    int log1[n];
    printf("Enter elements of 1st log (sorted): ");
    for(int x = 0; x < n; x++) {
        scanf("%d", &log1[x]);    }
    printf("Enter size of 2nd log: ");
    scanf("%d", &m);
    int log2[m];
    printf("Enter elements of 2nd log (sorted): ");
    for(int x = 0; x < m; x++) {
        scanf("%d", &log2[x]);    }
    int merged[n + m];
    while(i < n && j < m) {
        if(log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];        }    }
    while(i < n) {        // Copy remaining elements
        merged[k++] = log1[i++];    }
    while(j < m) {
        merged[k++] = log2[j++];    }
    printf("Merged chronological log: ");
    for(int x = 0; x < n + m; x++) {
        printf("%d ", merged[x]);    }
    return 0;}

