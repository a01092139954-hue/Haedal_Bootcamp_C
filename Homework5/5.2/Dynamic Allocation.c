#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // malloc, free 쓰려고 stdlib 헤더 포함

int main(void) { //main 함수 지정
	int n, max;// n, 최댓값 선언
	int* arr;// 배열 선언

	printf("입력할 숫자 개수: "); // 1. 입력: 입력할 숫자 개수 
	scanf("%d", &n); // 메모리 주소에 정수를 저장해라

	// 
	arr = (int*)malloc(sizeof(int) * n); // 할당해라 정수 n 크기만큼, arr에 시작 주소 저장해라 
	if (arr == NULL) // 실패시 NULL 참조되고, 오류처리됨
		exit(1);// 에러메세지 종료해라

	for (int i = 0; i < n; i++) // n개만큼 숫자를 입력받으면{
		printf("%d번째 숫자 입력: ", i);//출력해라"정수 번째 숫자 입력"을
			scanf("%d", &arr[i]); //배열을 숫자로 저장
	}

max = arr[0]; // 가장 첫번째 원소를 max에 저장해라

for (int i = 0; i < n; i++) //n개만큼 숫자를 입력받으면
	if (max <= arr[i]) // 조건문, arr에 저장된 숫자([i]= 숫자 배열)가 max 보다 크면
		max = arr[i]; // max에 저장해라

printf("입력한 숫자 중 최댓값: %d\n", max); // 출력해라 ":정수 숫자, 최댓값"

free(arr); //arr 다썼으면 반납해라 
return 0; //0될때까지 반복해라

}