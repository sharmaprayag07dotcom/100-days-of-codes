/* Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1005];
    scanf("%s", s);

    int i = 0, j = strlen(s) - 1;
    int isPalin = 1;

    while (i < j) {
        if (s[i] != s[j]) {
            isPalin = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalin)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}