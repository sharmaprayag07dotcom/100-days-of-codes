/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main(void) {
    unsigned long long number;
    char binary[65];
    int index = 0;

    scanf("%llu", &number);

    if (number == 0) {
        printf("0\n");
        return 0;
    }

    while (number > 0) {
        binary[index++] = '0' + (number % 2);
        number /= 2;
    }

    while (index > 0) {
        putchar(binary[--index]);
    }

    return 0;
}