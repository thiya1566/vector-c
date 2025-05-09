#include <stdio.h>
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
int intPow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int number, original, digitCount, digit, sum = 0;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    original    = number;           
    digitCount  = countDigits(number);

    while (number > 0) {
        digit = number % 10;                 
        sum  += intPow(digit, digitCount);   
        number /= 10;                        
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is NOT an Armstrong number.\n", original);
    }

    return 0;
}
