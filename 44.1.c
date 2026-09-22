/* Count spaces, digits, and special characters in a string.


Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    // remove trailing newline if present
    s[strcspn(s, "\n")] = '\0';

    int spaces = 0, digits = 0, special = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == ' ') {
            spaces++;
        } else if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (!isalpha((unsigned char)ch)) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}