#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
        }
    }
    return true;  
}

int main() {
    int n;

    printf("Nhập một số nguyên dương: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d là số nguyên tố.\n", n);
    } else {
        printf("%d không phải là số nguyên tố.\n", n);
    }

    return 0;
}
