#include <stdio.h>

int main() {
    int choice;
    float c, f;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            f = (c * 9.0 / 5.0) + 32;
            printf("%f Celsius = %f Fahrenheit\n", c, f);
            break;

        case 2:
            
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5.0 / 9.0;
            printf("%f Fahrenheit = %f Celsius\n", f, c);
            break;

        default:
            printf("Invalid choice! Please run the program again and enter 1 or 2.\n");
    }

    return 0;
}
