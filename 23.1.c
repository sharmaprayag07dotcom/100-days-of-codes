/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main(void) {
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}