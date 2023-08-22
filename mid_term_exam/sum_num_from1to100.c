#include <stdio.h>

int sumNumbers(int n) {
    int sum = (n / 2) * (1 + n);
    return sum;
}

int main() {
    int result = sumNumbers(100);
    printf("Sum of numbers from 1 to 100: %d\n", result);
    return 0;
}
