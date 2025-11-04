#include "practice.h"

void Test1()
{
	printf("예제 1번입니다\n");

	int numarr[10]; 

	for (int i = 0; i < 10; i++)
	{
		numarr[i] = i;
		printf("numarr[%d]의 값 : %d\n",i , numarr[i]);
	}
	
	printf("다른 방식으로는\n");

	//주소의 연산방식으로 표현
	for (int i = 9; i > -1; i--)
	{
		printf("numarr[%d]의 값 : %d\n", i, *(numarr+i));
	}

}


void Test2()
{
	printf("예제 2번입니다\n");

	const char* Group1[3] = { "A", "B" , "C" };
	const char* Group2[3] = { "사과", "복숭아" , "배" };
	const char* Group3[3] = { "사자", "호랑이" , "원숭이" };

	Printf(Group1);
	Printf(Group2);
	Printf(Group3);

	//배열을 인자로 받는 함수를 선언해보세요 이름은 자유롭게 만들어보세요
	//또 다른 배열의 주소를 가져오는 포인터를 선언해보세요
}

void Printf(const char* GroupArray[]) //Group1 -> GroupArray -> loacalGroupArray
										//주소를 넘기는
{
	
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", GroupArray[i]);
	}
}