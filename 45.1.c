/* Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int countCharFrequency(char s[], char ch) {
    int freq = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            freq++;
        }
    }
    return freq;
}

int main() {
    char s[1000];
    char ch;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';   // remove trailing newline

    scanf(" %c", &ch);

    printf("%d\n", countCharFrequency(s, ch));

    return 0;
}