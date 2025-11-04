#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "practice.h"

void Point(int* ptr, int num);

int main()
{
	printf("포인터 복습");

	//포인터 변수를 선언해보세요. 정수형(int)

	int* numptr;

	int num = 10;

	Point(&num, num);

	///정수 값의 주소를 저장해보세요. 주소연산자 사용
	numptr = &num; //그냥 num을 넣을시 16진수의 값으로 넣을수 없기에 에러

	//포인터 변수로부터 값을 가져와서 출력해보세요 역참조 연산

	printf("포인터 변수의 역참조 값: %d , num 값 : %d\n", *numptr, num);


	// 주소에 대한 이해
	printf("%p\n", numptr);

	//2진수 16진수 변환

	//데이터를 저장을 한다.
	//주소의 시작점을 기준으로 자료형의 정의된 범위만큼 정해진 방식으로 읽는다

	//pointer*
	//int* : 주소? 시작 주소로 부터 4바이트 만큼 읽어라


	float num2 = 0.2;
	float* num2ptr = &num2;

	numptr = num2ptr;

	printf("%d\n", *numptr);

	//컴퓨터에게 어떻게 읽을걸지 알려줘야 한다 -> 자료형 정의

	printf("2. 포인터와 배열 \n");

	int numarr[5] = { 0, }; //시작 주소로부터 4바이트를 읽겠다는 의미 5개
	
	printf("%d\n", sizeof(numarr));
	printf("numarr의 시작 주소: %p\n", numarr);

	numarr[1] = 1;
	//주소에 1을 더하면 배열의 자료형의 크기만큼 더해주는것
	*(numarr + 1) = 2; 

	//numarr[1] 표현식은 *(numarr+1) 내용을 자동으로 처리해주고 있다
	printf("num[1]의 값: %d\n", numarr[1]);

	//배열의 크기를 증가시키고 싶습니다-> 기존 주소에서 새로운 주소로 크기가 더 큰 데이터 공간을 생성

	printf("2, 배열과 상수 포인터 \n");

	//배열은 포인터다.
	/*
	* 배열보다 포인터의 범위가 더 크다
	* 배열은 기본적으로 주소의 값을 바꾸지 말라 -> 포인터변수 const 
	* 
	*/

	const char* itemText[3] = { "나무" , "바위" , "칼" };

	itemText[0] = "소"; //다른 주소로 이동

	printf("itemText 주소안에 있는 %s\n", itemText[0]);
	printf("itemText 주소안에 있는 %s\n", itemText[1]);
	printf("itemText 주소안에 있는 %s\n", itemText[2]);

	
	
	printf(" 포인터의 크기 %d\n", sizeof(itemText)); //포인터는 주소를 가르키는데 몇 바이트를 할당해서 쓸지 응용체제에서 결정

	//4바이트 -> 메모리 주소 4바이트 공간만 사용하겠다. 4바이트 운영체제에서 8바이트 게임 돌리면 안돌아간다

	//배열은 기본적으로 상수 포인터 : 주소를 변경하지 못하는 포인터다
	//저장할 수 있는 자료형을 상수형으로 표현했다

	*numarr = 5; //값이 바뀌면 주소가 바뀐다?

	printf("%p 와 %p", numarr, numarr + 3);

	//얘는 사실 주소이다 값을 바꿀수 없는
	char* ss = "ㅇㅇㅇㅂㄷㄱㅂㄱㅄㅄㅁㅇㅂㅎ갸ㅕㅈ" ;//char 타입의 배열



	printf("%s\n", ss); //주소지만 마지막이 null문자가 뜨면 종료된다

	// " " => 리터럴 문자 literal(문자 그대로) 리터럴 숫자 4 //이러한 타입은 읽기만 가능하게 만들자 (read only)

	/* 각 구역마다 주소를 저장하고 있음
	* 데이터
	* 힙
	* 스택
	*/

	Test1();




	Test2();



}

void Point(int *ptr,int num)
{
	*ptr += 3;
	printf("포인터 변수의 역참조 값: %d , num 값 : %d\n", *ptr, num);
}