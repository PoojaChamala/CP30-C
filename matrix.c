#include <stdio.h>

void setZeroes(int matrix[][100], int rows, int cols) {
    int rowFlags[rows];
    int colFlags[cols];

    // Initialize flags to 0
    for (int i = 0; i < rows; i++) {
        rowFlags[i] = 0;
    }
    for (int j = 0; j < cols; j++) {
        colFlags[j] = 0;
    }

    // Find zero elements and mark corresponding rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowFlags[i] = 1;
                colFlags[j] = 1;
            }
        }
    }

    // Set rows and columns to zero based on flags
    for (int i = 0; i < rows; i++) {
        if (rowFlags[i] == 1) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < cols; j++) {
        if (colFlags[j] == 1) {
            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // Assuming maximum size of 100x100

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    setZeroes(matrix, rows, cols);

    printf("Matrix after setting zeroes:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}