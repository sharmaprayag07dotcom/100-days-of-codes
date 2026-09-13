/* Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n, x;
    int largest = INT_MIN, secondLargest = INT_MIN;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x > largest) {
            secondLargest = largest;
            largest = x;
        } 
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    printf("%d", secondLargest);

    return 0;
}