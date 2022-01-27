#include <iostream>
#include <stdlib.h>
#define SIZE 5
int mat[SIZE]{ 0 };
int rank[SIZE]{ 0 };
int count = 0;
void greater(int tem[]);

int main()
{
	for (int i = 0; i < 5; i++) {
		printf("number %d:", i + 1);
		scanf_s("%d", &mat[i]);
	}
	greater(mat);
	printf("number: ");
	for (int i = 0; i < 5; i++) {
		printf("%6d\t", mat[i]);
	}
	printf("\nrank:   ");
	for (int i = 0; i < 5; i++) {
		printf("%6d\t", rank[i]);
	}
}

void greater(int tem[]) {
	int r[5] = { 1,1,1,1,1 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (mat[i] < mat[j]) {
				r[i]++;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		rank[i] = r[i];
	}
}