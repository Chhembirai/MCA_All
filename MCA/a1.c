#include <stdio.h>
int main() {
    int sign1, sign2;
    int mag1, mag2;
    int result;
    printf("Enter sign of first number (0 for +, 1 for -): ");
    scanf("%d", &sign1);
    printf("Enter magnitude of first number: ");
    scanf("%d", &mag1);
    printf("Enter sign of second number (0 for +, 1 for -): ");
    scanf("%d", &sign2);
    printf("Enter magnitude of second number: ");
    scanf("%d", &mag2);
    if (sign1 == sign2) {
    // Same signs -> Add magnitudes
        result = mag1 + mag2;
        printf("Operation: ADDITION\n");
        printf("Result magnitude = %d\n", result);
        printf("Result sign = %s\n", sign1 == 0 ? "+" : "-");
    } else {
    // Different signs -> Subtract smaller magnitude from larger
        printf("Operation: SUBTRACTION\n");
        if (mag1 >= mag2) {
            result = mag1 - mag2;
            printf("Result magnitude = %d\n", result);
            printf("Result sign = %s\n", sign1 == 0 ? "+" : "-");
        } else {
            result = mag2 - mag1;
            printf("Result magnitude = %d\n", result);
            printf("Result sign = %s\n", sign2 == 0 ? "+" : "-");
        }
    }
    return 0;
}