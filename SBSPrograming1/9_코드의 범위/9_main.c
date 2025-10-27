#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 변수, 함수
* 변수가 왜 필요한가? 변수를 저장하는 자료형을 지정을 해줬다
* 함수가 왜 필요한가? 명령어 작성 (명령문) 세미클론 명령이 끝났다 라는 사실을 알린다
* 
* 개발 할 때 한글로 먼저(Pseudo code)표현하라
* 명령문은 한줄로 표현을 못한다 -> 코드를 해석하기도 힘들고,반복적으로 사용하는 코드를
  표현하기도 힘들다
*/

/*
*세미클론 -> 명령문이 종료되는 것을 표현한다. 코드의 끝을 표현한다
* 중괄호 -> 범위(Scope)를 표현한다. { } 넓은 의미: 단일로 표현을 하기 어려운 부분을 하나의 의미로 표현하기 위함
* 함수 -> 명령문들의 집합. 범위를 표현해야 한다. 함수의 head -> 함수를 구분하기 위한 표현 방식
* 변수 ->(자료형) 변수이름; 변수에도 중괄호를 사용할 수 있을까? => 변수를 범위로 표현해야 하는 경우가 있을까? => 배열
*/

void StatDevideFunc();

/*
* 함수 내부의 데이터를(스택 영역) 함수 밖에 사용할 수 있게 만들자
*/

int ReturnStatAmount();

//코드를 분석
//반복되고 있는 형태를 관찰해라

void ModifyStatValue(int baseamount);

//코드 개선 경험 24줄을 3줄 24 / 3 = 8 800%의 효율
//작업도 

int main()
{
	//코드를 넘겨준다
	int num = 10;

	//StatDevideFunc();

	int Dex = 1;

	ModifyStatValue(Dex);

	printf("main 함수 안에 있는 num의 값 : %d\n", num);

	
}

void ModifyStatValue(int baseamount)
{
	int modifyValue = ReturnStatAmount(baseamount, 1);
	printf("전투에 사용할 Dex : %d\n", modifyValue);
}

//실습과제: 8줄의 코드를 함수로 변환해보세요

//Q1 main에도 LUK Func에도 LUK 컴퓨터가 같은 이름을 구별할까?
//지역변수

//Q1-2 이름이 전혀 겹치지 않게 만들면 되지 않을까? -> Player , Enemy 이름이 같더라도 사용할수 있게 만들 수 있지 않을까? 지역을 표현

//Q2 StatDevidFUnc함수를 만났을때 local이 변경되어 Stat의 변수를 표현하고 있다 함수 종료 변수 사라짐

//스택 영역은 사라질 때 가지고 있는 데이터를 모두 소멸시킨다.
//ㄴ쌓인 데이터를 지우지 않으면 어떤 일이 일어날까요? -> 블루스크린
// 코드를 지우는 코드 영역이 종료되면 자동으로 메모리를 비워준다
//장단점 장점)메모리 관리가 수월하게 컴퓨터 영역을 만듬 단점)메모리에 저장해두었다가 사용할 수는 없을까? => 힙 영역

int ReturnStatAmount(int baseAmount , int itemStatAmount)
{
	int result = baseAmount;
	// 게엠에 레벨
	int levelCount = 1;
	
	int itemWeight = 10;

	result = result + levelCount * (itemStatAmount*10);

	return result;
}

void StatDevideFunc()//들여쓰기를 자동으로 하는 명령어. (ctrl+k) + (ctrl+d)
{
	//가중치 플레이어의 레벨,아이템 등등을 가졌을 떄 추가적인 스탯을 준다
	//ㄴ 일시적으로 메모리를 저장해두었다가 지우고 싶다

	//alt 누른 상태로 드래그한 영역을 화살표 위아래로 움직이기
	int num;
	//scanf("%d", &num);
	//printf("num의 값 %d\n", num);



	//반복문 , 조건문 , 함수 => 코드를 구현할 수 있다
}//함수의 끝에 세미클론이 없다? 중괄호 곧 코드의 끝을 표현하기 때문이다.