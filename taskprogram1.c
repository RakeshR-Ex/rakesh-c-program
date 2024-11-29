#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    int (*funcPtr)(int, int);
    funcPtr = add;
    int result = funcPtr(x, y);
    printf("The sum of %d and %d is: %d\n", x, y, result);

    return 0;
}