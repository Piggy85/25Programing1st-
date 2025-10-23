/*
	for 반복문과 while반복문의 문법 이해하기
	실습목표:지난 시간에 구현했던 코드를 반복문으로 표현하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 반복할 수 있는 횟수를 직접 입력 받아서 사용하기
	// scanf (c언어에서 사용하는 방식)
	//c++ 입력 받는 함수
	// 전부 다른 입력 함수





	// 1. for 반복문 (사용 예시)

	int num1 = 97;

	int loopcount = 10;
							//입력을 받기 위해 콘솔창이 깜빡깜빡거린다
	printf("반복할 횟수를 작성해주세요 :");
	scanf("%d", &loopcount); //loopcount 주소 몇칸 어떻게 저장되어 있다

	for (int i = 1; i <= loopcount; i = i + 2) //숫자 0을 저장 
	{
		printf("%c ", num1);
		printf("%d ", i);
		num1 = num1 + 1;
	}

	// 0 ~ 9까지의 숫자가 나옴 [10] 반복하고 싶은 숫자로 바꾸어 보세요

	//2. while 반복문
	//while(반복할 조건) <-참이면 중괄호 안의 코드를 실행하라

	printf("\n =====while 반복문====== \n");

	int num2 = 97;
	int j = 0;

	while (j <= loopcount)
	{
		printf("%c ", num2);
		printf("%d ", j);
		j = j + 1;

	}

	printf("\n =====while 반복문====== \n");

	while (true)
	{
		printf("%c ", num2);
		printf("%d ", j);
		j = j + 1;

		if (j >= loopcount+10)
		{
			break; //흐름을 종료시킨다(for while 
		}
	}

}