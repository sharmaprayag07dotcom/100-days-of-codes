/* Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, element;
    scanf("%d", &n);

    int arr[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int pos = n;

    // Find the position where the element should be inserted
    for (int i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements one position to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;

    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);

        if (i < n) {
            printf(" ");
        }
    }

    return 0;
}