#include <stdio.h>

int main() {
    char unit1[10], unit2[10];
    float value, result;
    int choice;

    printf("Enter the unit you want to convert from: ");
    scanf("%s", unit1);

    printf("Enter the unit you want to convert to: ");
    scanf("%s", unit2);

    printf("Enter the value: ");
    scanf("%f", &value);

    if (strcmp(unit1, "meter") == 0 && strcmp(unit2, "kilometer") == 0) {
        result = value / 1000;
        printf("%.2f meters is equal to %.2f kilometers\n", value, result);
    } else if (strcmp(unit1, "kilometer") == 0 && strcmp(unit2, "meter") == 0) {
        result = value * 1000;
        printf("%.2f kilometers is equal to %.2f meters\n", value, result);
    } else if (strcmp(unit1, "gram") == 0 && strcmp(unit2, "kilogram") == 0) {
        result = value / 1000;
        printf("%.2f grams is equal to %.2f kilograms\n", value, result);
    } else if (strcmp(unit1, "kilogram") == 0 && strcmp(unit2, "gram") == 0) {
        result = value * 1000;
        printf("%.2f kilograms is equal to %.2f grams\n", value, result);
    } else {
        printf("Invalid units\n");
    }

    return 0;
}