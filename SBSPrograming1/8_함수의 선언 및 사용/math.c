#include "8_main.h"
#include <stdio.h>

void AddFunc(int num1, int num2) //void = 반환값이 비어있다 => 반환을 안하겠다
{
	int result = num1 + num2;
	printf("두 수를 더한 값 %d + %d = %d\n", num1, num2, result);
}

void MinFunc(int num1, int num2)
{
	int result = num1 - num2;
	printf("두 수를 더한 값 %d - %d = %d\n", num1, num2, result);
}

void MultyFunc(int num1, int num2)
{
	int result = num1 * num2;
	printf("두 수를 더한 값 %d * %d = %d\n", num1, num2, result);
}

void DivideFunc(int num1, int num2)
{
	if (num2 == 0 && num1 != 0)
	{
		printf("두 수를 더한 값 %d / %d = 무한대\n", num1, num2);
	}
	else if (num1 == 0 && num2 == 0)
	{
		printf("두 수를 더한 값 %d / %d = 1\n", num1, num2);
	}
	else if (num1 == 0 && num2 != 0)
	{
		printf("두 수를 더한 값 %d / %d = 0\n", num1, num2);
	}
	else
	{
		int result = num1 / num2;
		printf("두 수를 더한 값 %d / %d = %d\n", num1, num2, result);
	}
}

// return; // 코드를 더 이상 실행하지 않고 종료해주세요
// return의 다른 의미 : 뒤에 있는 값으로 반환한다