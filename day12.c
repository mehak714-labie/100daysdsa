//Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
#include <stdio.h>
int main() {
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);        }    }
    int symmetric = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(A[i][j] != A[j][i]) {
                symmetric = 0;
                break;            }        }
        if(symmetric == 0)
            break;    }
    if(symmetric)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");
    return 0; }
