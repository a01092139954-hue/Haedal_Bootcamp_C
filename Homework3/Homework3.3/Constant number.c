#include <stdio.h>

// 숫자를 거꾸로 뒤집는 함수
int reverse(int n) {
    int units = n % 10;          // 일의 자리
    int tens = (n / 10) % 10;    // 십의 자리
    int hundreds = n / 100;      // 백의 자리

    // 위치를 바꿔서 다시 합산
    return (units * 100) + (tens * 10) + hundreds;
}

int main() {
    int A, B;

    // 1. 두 수 입력 받기
    scanf("%d %d", &A, &B);

    // 2. 두 수를 각각 뒤집기
    int revA = reverse(A);
    int revB = reverse(B);

    // 3. 뒤집힌 수 중 더 큰 값을 출력
    if (revA > revB) {
        printf("%d\n", revA);
    }
    else {
        printf("%d\n", revB);
    }

    return 0;
}