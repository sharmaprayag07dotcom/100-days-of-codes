/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, amount;

    printf("Enter principal: ");
    scanf("%f", &P);

    printf("Enter rate of interest: ");
    scanf("%f", &R);

    printf("Enter time in years: ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    amount = P * pow((1 + R / 100), T);
    CI = amount - P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
