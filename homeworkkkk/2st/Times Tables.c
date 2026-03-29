#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//변수 선언
	int N;
	
	//입력
	if (scanf("%d", &N) !=1) return 0;

	//출력
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", N, i,  N * i);
	}

	return 0;
}