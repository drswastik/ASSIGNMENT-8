#include <stdio.h>
#include <stdlib.h>
void matmul(int *arr1, int r1, int c1, int *arr2, int r2, int c2, int *result) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            *(result + i * c2 + j) = 0;
            for (k = 0; k < c1; k++) {
                *(result + i * c2 + j) += *(arr1 + i * c1 + k) * *(arr2 + k * c2 + j);
            }
        }
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c);
    int org[r][c];
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter the element for %d row and %d column: ", i, j);
            scanf("%d", &org[i][j]);
        }
    }

    int r1, c1;
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &r1);
    if (r1 != c) {
        printf("Sorry! Cannot perform matrix multiplication\n");
        exit(1);
    }
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &c1);
    int dup[r1][c1];
    int p, q;
    for (p = 0; p < r1; p++) {
        for (q = 0; q < c1; q++) {
            printf("Enter the element for %d row and %d column: ", p, q);
            scanf("%d", &dup[p][q]);
        }
    }

    int result[r][c1];
    matmul(&org[0][0], r, c, &dup[0][0], r1, c1, &result[0][0]);

    printf("Result of matrix multiplication:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}