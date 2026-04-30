#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main(void) {// void 함수지정
	FILE* org = fopen("input.txt", "rt");// 파일스트림: input.txt파일을 입력스트림으로 열자 or 읽기 가능한 스트림이다 알려줌
	FILE* copy = fopen("output.txt", "wt");//파일스트림: output.txt파일을 출력스트림으로 열자 or 쓰기 가능한 스트림이다 알려줌
	char str[100];//최대 100 바이트 크기의 문자 배열 가능함 선언

	if (org == NULL || copy == NULL)// 실패하면 NULL을 반환함
	{
		printf("파일 열기 실패!\n");// 출력해라 "파일열기 실패"를
		exit(1);// 에러메세지 종료해라
	}

	printf("------------ org 내용 ------------\n");//출력해라 
	// 입력 크기가 NULL이 아닐때 
	while (fgets(str, sizeof(str), org) != NULL) { 
		printf("현재 복사 문자열:\n");// 출력해라 
	printf("\n");//출력해라 줄바꾸기를..?
	printf("----------------------------------\n");//출력해라 ----줄바꾸기를..?

	if (feof(org) != 0) // 파일의 끝이 0이 아니면
		printf("파일 복사 성공!\n"); // 출력해라 "파일복사성공"을
	else
		printf("파일 복사 실패!\n");//아니면 "파일복사실패"를 출력해라

	fclose(org);// 스트림 없애기: org 파일을 닫아라
	fclose(copy);// 스트림 없애기: copy 파일을 닫아라

	return 0;// 0이될때까지 반복해라
}