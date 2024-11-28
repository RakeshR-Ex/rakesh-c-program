#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("The concatenated string is: %s\n", str3);
    printf("The length of the concatenated string is: %lu \n", strlen(str3));
    return 0;
}

