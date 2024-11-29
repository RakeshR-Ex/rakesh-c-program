#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; 
    printf("Array elements using pointer increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr++; 
    }
    ptr--; 
    printf("\n\nArray elements using pointer decrement:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--; 

    printf("\n");

    return 0;
}