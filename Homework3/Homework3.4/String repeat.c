#include <stdio.h>
#include <string.h>

int main() {
    int T, R;
    char S[21]; // 문자열 길이는 최대 20자

    // 1. 테스트 케이스 개수 입력
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        // 2. 반복 횟수 R과 문자열 S 입력
        scanf("%d %s", &R, S);

        // 3. 문자열의 각 문자를 순차적으로 확인
        for (int i = 0; i < strlen(S); i++) {
            // 4. 각 문자를 R번 반복해서 출력
            for (int j = 0; j < R; j++) {
                printf("%c", S[i]);
            }
        }

        // 한 테스트 케이스가 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}