#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The number %d is divisible by both 3 and 5.\n", num);
    } else {
        printf("The number %d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}





