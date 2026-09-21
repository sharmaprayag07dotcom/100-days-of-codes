/* Reverse a string.


Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    scanf("%s", s);
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i++] = s[j];
        s[j--] = t;
    }
    printf("%s\n", s);
    return 0;
}