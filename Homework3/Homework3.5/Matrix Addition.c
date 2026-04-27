#include <stdio.h>

int main() {
    int N, M;
    int A[100][100], B[100][100];

    // 1. 행렬의 크기 N, M 입력
    scanf("%d %d", &N, &M);

    // 2. 행렬 A 입력받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 3. 행렬 B 입력받기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 4. 행렬 A와 B를 더한 결과 출력하기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            // 각 원소를 더한 값을 공백으로 구분하여 출력
            printf("%d ", A[i][j] + B[i][j]);
        }
        // 한 행의 출력이 끝나면 줄바꿈
        printf("\n");
    }

    return 0;
}