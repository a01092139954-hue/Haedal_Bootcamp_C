#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 변수 선언
	int a, b;
	
	//입력 
	scanf("%d %d", &a, &b);

	//출력
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}