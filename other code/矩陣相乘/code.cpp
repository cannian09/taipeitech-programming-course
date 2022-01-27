
#include <iostream>
#include <stdio.h>
#define SIZE 10
static int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
int level;
void mul(int a[SIZE][SIZE], int b[SIZE][SIZE]);
int main()
{
    printf("Enter the matrix level n=");
    scanf_s("%d", &level);
    while (level <= 0) {
        printf("\nWrong level!plz enter level again n=");
        scanf_s("%d", &level);
    }
    printf("enter the A matrix element:\n");
    for (int i = 0; i < level; i++) {
        for (int j = 0; j < level; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }
    printf("enter the B matrix element:\n");
    for (int i = 0; i < level; i++) {
        for (int j = 0; j < level; j++) {
            scanf_s("%d", &B[i][j]);
        }
    }
    mul(A, B);
}


void mul(int a[SIZE][SIZE], int b[SIZE][SIZE]) {
    for (int i = 0; i < level; i++) {
        for (int j = 0; j < level; j++) {
            for (int k = 0; k < level; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nmultiply of the matrix = \n");
    for (int i = 0; i < level; i++) {
        for (int j = 0; j < level; j++) {
            printf("%10d ", C[i][j]);
        }
        printf("\n");
    }
}