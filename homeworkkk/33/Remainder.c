#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//변수 선언
	int a, b, c;
	//입력
	scanf("%d %d %d", &a, &b, &c);
	
	//출력
	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c))% c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (((a % c) * (b % c)))% c);

	return 0;