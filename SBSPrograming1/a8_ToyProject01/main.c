//포인터 공부 어떻게 하면 되나요?
//1. 정의 -> 무엇인가? 왜 써야하는가?

/*
턴제 게임
플레이어의 이동 몬스터도 랜덤으로 이동
{
플레이어가 이동 몬스터에 부딪히면 전투 발생
}


배틀 구문 -> 특정 상황에서만 발동 함수()
{
	speed를 비교 선후공 결정
	1. A턴 번호로 랜덤 버프 제공 random 함수 사용
	공격력 증가 또는 하락
	2. (공격) 상대방은 랜덤 스킬 사용 / 플레이어는 마나 사용 선택 스킬

	3, 반복 둘중 한명의 체력이 0이 되면 종료
}




*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void PlayerControl()
{
	//scanf() << 코드가 멈추고 기다림 엔터키를 칠때까지

	unsigned char input = 0; //화살표 숫자값 225

	if (_kbhit())
	{
		input = _getch();
		if (input == 224 || input == 0)
		{
			
		}
	}


	_getch(); //
}
void Update()
{

}
void Render()
{

}

int Quit()
{
	// 게임이 종료되는 조건
	int input = 0;
	scanf("%d", &input);
	if (input == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	while (1)
	{
		//로직
		//조작하는 함수
		//Update(갱신하다)
		//랜더 ( 데이터 변경되면 그것을 실행하라)

		PlayerControl();
		Update();
		Render();


		if (Quit())
		{
			return 0;
		}

		printf(" ddddddd");


	}
}

//내일은 게임 제작 