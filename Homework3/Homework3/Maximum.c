#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[9];
    int max = 0;
    int index = 0;

    // 1. 9개의 숫자 입력 선언
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);

        // 2. 최댓값 찾기 
        if (arr[i] > max) {
            max = arr[i];
            index = i + 1;
        }
    } 

    // 3. 결과 출력
    printf("%d\n", max);
    printf("%d\n", index);

    return 0;
}