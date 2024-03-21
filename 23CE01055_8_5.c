#include <stdio.h>
void rotateRight(int *mat, int rows, int cols, int n) {
    n = n % 4;
    if (n == 0)
        return;
    int temp[rows][cols];
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int new_i = j;
                int new_j = rows - 1 - i;
                temp[new_i][new_j] = *((mat + i * cols) + j);
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                *((mat + i * cols) + j) = temp[i][j];
            }
        }
    }
}
void printMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *((mat + i * cols) + j));
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int mat[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int n;
    printf("Enter the number of right rotations: ");
    scanf("%d", &n);
    rotateRight((int *)mat, rows, cols, n);
    printf("Matrix after %d right rotations:\n", n);
    printMatrix((int *)mat, rows, cols);
    return 0;
}