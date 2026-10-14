/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the previous subarray or start fresh at arr[i]
        currentMax = (arr[i] > currentMax + arr[i]) ? arr[i] : currentMax + arr[i];

        if (currentMax > maxSoFar) {
            maxSoFar = currentMax;
        }
    }

    printf("%d\n", maxSoFar);
    return 0;
}