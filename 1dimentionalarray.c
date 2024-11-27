#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("Enter 5 elements of the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}