/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}