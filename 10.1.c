/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }

    return 0;
}