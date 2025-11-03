#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

// 포인터(pointer) : 가르키다.
// 컴퓨터 프로그래밍에서 포인터가 무엇일까? -> (주소) 가르키다 
// 주소는 무엇인가? 
// 택배.위치를 알고 싶다
//컴퓨터 데이터에 대한 위치를 알고 싶다
//포인터는 왜 16진수로 저장될까?
//컴퓨터는 왜 16진수로 저장할까요?
//0x => 16진수

void Add(int *value);

void Minus(double* valueptr);

int main()
{
	int a; //a란 이름으로 4바이트 공간의 정수 데이터를 저장하는 공간을 만든다
	//구조체 함수 변수는 위치를 가지고 있다
	//scanf("%d", &a);
	
	printf("&a의 컴퓨터가 보고 있는 숫자 : %p\n", &a);

	a = 20; // a 이름에 int 자료형을 저장하겠다

	Add(&a);

	int* aPtr = &a; //포인터의 선언'*' 주소를 저장하게 되었다
	int value = aPtr;//포인터의 역참조 (*)

	printf("value 값 : %d\n", value);

	//포인터는 포인터 타입으로 사용해야 한다
	//value 타입과 point(주소)를 구분해서 사용해야 한다

	char b = 'b'; //
	printf("b를 숫자로 출력해 : %d\n", b);
	char* bptr = &b; // bptr char 주소를 저장하는 포인터 ( 변수)
	bptr = &a; //bptr에 a의 주소를 저장하라 
	printf("a의 값을 문자로 출력해 : %d\n", *bptr);

	//(1) 포인터 주소를 선언할 수 있다.
	//(2) 주소를 이용해서 주소에 저장된 값을 불러올 수 있다
	//(3) 변수에 저장된 주소를 사용할 수 있다

	//double 저장할 수 있는 c 변수를 선언

	double c = 3.14;
	double* cptr = &c;
	Minus(cptr);
	Minus(&c);
	printf("c의 주소를 표시해 %d\n", cptr);
	printf("c의 값을 표시해 %.2lf\n", *cptr);

	const double* const cptr = "민우행님 꽈배기 서비스좀";

	//포인터에 대한 깊은 이해
	// (1) 포인터도 변수다 포인터에 다른 주소를 저장할 수 있다
	cptr = &b; // cptr은 주소를 저장하는데 실수의 주소를 읽어온다 bptr 정수의 주소를 읽어온다
	printf("c의 값을 표시해 %d\n", *cptr);

	//Pointer 주소를 저장하는 녀석이 자료형에 대한 주소다
	//Pointer로 선언이 아니라 왜 int *로 선언할까?
	//int* numptr; 주소를 저장하는 녀석이다, + 시작점[AA AA AA AA] 
	// 정수를 실수형으로 읽으면 실수의 방식으로 읽게 된다
	//주소를 알고 그 주소에서 어디 까지 해석해야 하는지에 대한 정보를 알고 있으면,
	//컴퓨터에서 정보를 가져올 수 있다
	//(1)함부로 다른 타입의 주소를 넘겨주면 예측할 수 없는 오류가 발생할 수 있다
	//(2)정수의 주소를 넘겨받아서 비트를 이용해서 코드를 짜는 예제

	//포인터에 const를 사용하면 -> 포인터 주소를 변경하지 못하게 막을 수 있을까?

	// *포인터 변수 -> 포인터 가르키고 있는 값을 변경하지 못하게 막을 수 있을까?

	// const가 맨 앞 주소안에 값 변경 금지 const가 포인터변수 앞 새로운 주소로 변경 금지
}

void Minus(double* valueptr)
{
	*valueptr -= 0.25;
}

void Add(int *valueptr)
{
	*valueptr += 3;
}

void PlayerMove(int* playerX, int* playerY) //player x주소 , player y주소
{

}