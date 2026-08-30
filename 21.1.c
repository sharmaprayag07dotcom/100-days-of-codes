/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    long long n, first, last, middle, divisor = 1, temp;

    scanf("%lld", &n);

    temp = n < 0 ? -n : n;

    if (temp < 10) {
        printf("%lld", n);
        return 0;
    }

    last = temp % 10;

    while (temp / divisor >= 10) {
        divisor *= 10;
    }

    first = temp / divisor;
    middle = (temp % divisor) / 10;

    temp = last * divisor + middle * 10 + first;

    if (n < 0)
        temp = -temp;

    printf("%lld", temp);

    return 0;
}
