/*Write a program to print the following pattern:
*****
*****
*****
*****
******/

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        printf("*****\n");

        if (i < 5) {
            printf("\n");
        }
    }

    return 0;
}