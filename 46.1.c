/* Remove all vowels from a string.


Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char res[1000];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (strchr("aeiouAEIOU", c) == NULL) {
            res[j++] = c;
        }
    }
    res[j] = '\0';

    printf("%s\n", res);
    return 0;
}
