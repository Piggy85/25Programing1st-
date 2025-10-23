/*
	for 반복문과 while반복문의 문법 이해하기
	실습목표:지난 시간에 구현했던 코드를 반복문으로 표현하기
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 1. for 반복문 (사용 예시)

	int num1 = 97;

	int loopcount = 10;

	for (int i = 1; i <= loopcount; i = i + 2) //숫자 0을 저장 
	{
		printf("%c ", num1);
		printf("%d ",i);
		num1 = num1 + 1;
	}

	// 0 ~ 9까지의 숫자가 나옴 [10] 반복하고 싶은 숫자로 바꾸어 보세요

	//2. while 반복문
	//while(반복할 조건) <-참이면 중괄호 안의 코드를 실행하라

	printf("\n =====while 반복문====== \n");

	int num2= 97;
	int j=0;


	while (true)
	{
		printf("%c ", num2);
		printf("%d ", j);
		j = j + 1;

		if (j >= loopcount)
		{
			break; //흐름을 종료시킨다(for while 
		}
	}

}