#include <stdio.h>

int main() {
    int num = 42; 
    int *ptr;     
    ptr = &num; 
    printf("Value of num: %d\n", *ptr);       
    printf("Address of num: %p\n", ptr);      
    printf("Address of pointer itself: %p\n", (void*)&ptr); 
    return 0;
}