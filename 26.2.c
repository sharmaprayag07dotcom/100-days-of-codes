/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int n = 13;  // number of stars

    for (int i = 0; i < n; i++) {
        printf("*\n");
    }

    return 0;
}