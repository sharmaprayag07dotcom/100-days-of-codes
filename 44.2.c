/* Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    // remove trailing newline if present
    s[strcspn(s, "\n")] = '\0';

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    printf("%s\n", s);

    return 0;
}