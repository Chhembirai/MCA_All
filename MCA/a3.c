 /*subtraction using 2's complement*/
#include <stdio.h>
int main() {
    printf("Subtraction in 2's complement:\n");
    int a[4], b[4], result[4];
    int i, carry = 1, sum;
    printf("Enter first 4-bit binary number: ");
    for (i = 0; i < 4; i++)
        scanf("%d", &a[i]);
    printf("Enter second 4-bit binary number: ");
    for (i = 0; i < 4; i++)
        scanf("%d", &b[i]);
    // Step 1: Find 1's complement of B
    for (i = 0; i < 4; i++)
        b[i] = 1 - b[i];
    // Step 2: Add 1 to get 2's complement
    for (i = 3; i >= 0; i--) {
        sum = b[i] + carry;
        b[i] = sum % 2;
        carry = sum / 2;
    }
    // Step 3: Add A + 2's complement of B
    carry = 0;
    for (i = 3; i >= 0; i--) {
        sum = a[i] + b[i] + carry;
        result[i] = sum % 2;
        carry = sum / 2;
    }
    // Ignore final carry
    printf("Result: ");
    for (i = 0; i < 4; i++)
        printf("%d", result[i]);
    return 0;
}