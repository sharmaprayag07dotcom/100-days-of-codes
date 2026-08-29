/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    long long n, product = 1;
    int digit;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
        }

        n /= 10;
    }

    printf("%lld", product);

    return 0;
}