#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, uppercase, lowercase, digit, special;

    printf("Enter your password: ");
    scanf("%s", password);

    length = strlen(password);
    uppercase = lowercase = digit = special = 0;

    if (length >= 8) {
        for (int i = 0; i < length; i++) {
            if (isupper(password[i])) {
                uppercase = 1;
            } else if (islower(password[i])) {
                lowercase = 1;
            } else if (isdigit(password[i])) {
                digit = 1;
            } else {
                special = 1;
            }
        }
    }

    if (uppercase && lowercase && digit && special) {
        printf("Password meets the criteria.\n");
    } else {
        printf("Password does not meet the criteria.\n");
    }

    return 0;
}