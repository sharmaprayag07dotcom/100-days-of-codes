/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}