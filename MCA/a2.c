/*subtraction with one's complement*/
#include <stdio.h>
int main() {
    int a[4], b[4], result[4];
    int i, carry = 0, sum;
    printf("Subtraction in 1's complement:\n");
    printf("Enter first 4-bit binary number: ");
    for (i = 0; i < 4; i++){
        scanf("%d", &a[i]);
    }   
    printf("Enter second 4-bit binary number: ");
    for (i = 0; i < 4; i++){
        scanf("%d", &b[i]);
    }
    // 1's complement of B
    for (i = 0; i < 4; i++){
        b[i] = 1 - b[i];
    }
    // Add A + 1's complement of B
    for (i = 3; i >= 0; i--) {
        sum = a[i] + b[i] + carry;
        result[i] = sum % 2;
        carry = sum / 2;
    }
    // End-around carry
    if (carry == 1) {
        for (i = 3; i >= 0; i--) {
            sum = result[i] + 1;
            result[i] = sum % 2;
            if (sum == 1)
                break;
        }
    }
    printf("Result: ");
    for (i = 0; i < 4; i++){
        printf("%d", result[i]);
    }
    return 0;
}