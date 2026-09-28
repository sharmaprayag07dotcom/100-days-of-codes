/* Print all sub-strings of a string.


Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%1000s", s);
    int n = strlen(s);
    int first = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!first) printf(",");
            first = 0;
            for (int k = i; k <= j; k++) {
                putchar(s[k]);
            }
        }
    }
    printf("\n");

    return 0;
}