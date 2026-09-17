/* Perform diagonal traversal of a matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse diagonals starting from the first column
    for (int startRow = 0; startRow < rows; startRow++) {
        int i = startRow, j = 0;

        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    // Traverse remaining diagonals starting from the last row
    for (int startCol = 1; startCol < cols; startCol++) {
        int i = rows - 1, j = startCol;

        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}