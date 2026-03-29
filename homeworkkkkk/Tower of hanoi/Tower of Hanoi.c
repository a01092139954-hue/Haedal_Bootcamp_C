#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//하노이 탑 이동과정 출력 함수
//n 원판 개수, start 출발지, mid 거쳐가는 곳, end 목적지
void hanoi(int n, int start, int mid, int end) {
	if (n == 1) {
		printf("%d %d\n", start, end);
		return;
	}
	hanoi(n - 1, start, end, mid);
	printf("%d %d\n", start, end);
	hanoi(n - 1, mid, start, end);
}
int main()
{
	int n;
	if (scanf("%d", &n) != 1) return 0;

	int k = (1 << n) - 1;
	printf("%d\n", k);

	hanoi(n, 1, 2, 3);

	return 0;
}