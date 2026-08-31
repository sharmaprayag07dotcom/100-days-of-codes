/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int factorial(int digit) {
    int result = 1;

    for (int i = 2; i <= digit; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    int number, original, sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    if (number < 0) {
        printf("Not strong number\n");
        return 0;
    }

    original = number;

    do {
        sum += factorial(number % 10);
        number /= 10;
    } while (number != 0);

    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
