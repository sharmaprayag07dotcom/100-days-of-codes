/* Toggle case of each character in a string.


Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toggleCase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
}

int main() {
    char s[1000];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';   // remove trailing newline

    toggleCase(s);

    printf("%s\n", s);

    return 0;
}