#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen 함수를 사용하려고

int main() {
    int T;
    char str[1001]; // 문자열 길이는 1000 미만이므로 넉넉하게 1001로 설정

    // 1. 테스트 케이스 개수 입력
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        // 2. 문자열 입력
        scanf("%s", str);

        // 3. 문자열의 길이 계산
        int len = strlen(str);

        // 4. 첫 글자(str[0])와 마지막 글자(str[len-1]) 출력
        // %c 문자 하나를 출력하며, 두 문자를 붙여서 출력
        printf("%c%c\n", str[0], str[len - 1]);
    }

    return 0;
}