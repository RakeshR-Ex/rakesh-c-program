#include <stdio.h>

int main() {
    char choice;
    float temp, converted_temp;

    printf("Enter C for Celsius to Fahrenheit or F for Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted_temp = (temp * 9.0 / 5.0) + 32.0;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp, converted_temp);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted_temp = (temp - 32.0) * 5.0 / 9.0;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, converted_temp);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}