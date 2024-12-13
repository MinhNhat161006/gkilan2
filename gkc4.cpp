#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nhap vao khong phai la so nguyen duong!\n");
        return 1;
    }

    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
