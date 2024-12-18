#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else {
            if (tolower(str[start]) != tolower(str[end])) {
                return 0;  
            }
            start++;
            end--;
        }
    }
    return 1; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}











