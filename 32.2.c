/* Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    int count[10] = {0};

    scanf("%lld", &n);
    n = llabs(n);

    if (n == 0)
        count[0] = 1;

    while (n > 0) {
        count[n % 10]++;
        n /= 10;
    }

    int mostDigit = 0;

    for (int i = 1; i <= 9; i++) {
        if (count[i] > count[mostDigit]) {
            mostDigit = i;
        }
    }

    printf("%d", mostDigit);
    return 0;
}