#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}






