//가위 바위 보
//실습 목표 : 다른 미니 게임 직접 설계하고 코드를 작성해보는 것

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h> //bool을 쓰기 위한 헤더
#include "가위바위보.h"

//유저는 가위 바위 보 중에서 하나를 선택해주세요
// 결과 : 컴퓨터가 무엇을 냈는가 따라서 결과가 달라진다.

/*
* 프로그램 혼자서 작성할 때 권장하는 순서
1.한글로 먼저 어떤 것을 구현할지 주석으로 표현해보세요
2. 한글로 표현한 내용을 컴퓨터에게 어떻게 명령할지 직접 작성
2-1 특별한 문법, 헤더를 가져와서 사용한다 오류가 나는 부분
2-2 출력을 해서 결과를 성공시켜보기

*/

/*
 가위바위보게임을 완성하기 위해 필요한 구현 사항
 1. 유저가 선택할 수가 없다.
 2, 컴퓨터가 정해진 결과만 출력한다 -> 랜덤
 3. 스코어 3점 먼저 취득하면 승리한다
*/

/*
반복해서 사용하고 싶다 - 반복문
*/

// alt 키를 누르고 위 아래 키를 누르면 코드 위 아래로 이동

//피그마로 코드의 흐름을 표현하라

/*
	가위 바위 보 숫자를 scanf를 사용해서 입력받아 보세요
*/

int main()
{
	//조건문 출력 테스트
	//세미클론 명령이 끝이 났다고 알려줌

	bool value = 5 < 3;

	if (false /*조건*/); //; 을 넣으면 한줄짜리 코드로 실행 
	{
		printf("조건이 실행되었다\n");
		//실행할 내용
	}

	printf("가위 바위 보 게임\n");

	int a = game();

	if (a != 5)
	{
		printf("유저가 패배했습니다");
	}
	else
	{
		printf("유저가 승리했습니다");
	}

	//플레이어가 선택한 결과를 저장 
	//1, 가위 2.바위 3.보 (임의의 약속)
/*
	int playerChoice = 2;
	int computerChoice = 3;
	int playerScore = 0;
	int computerScore = 0;
	

	const char* playerCharacter = "가위"; //문자를 저장할수 있는 변수
	const char* computerCharacter = "보";

	if (playerChoice == 1)
	{
		if (computerChoice == 1)
		{
			printf("유저가 비겼습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 패배했습니다\n");
		}
		else//예외 사항을 적어서 나머지로 처리 
		{
			printf("유저가 승리했습니다\n");
		}

	}

	if (playerChoice == 2)
	{
		if (computerChoice == 1)
		{
			printf("유저가 이겼습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 비겼습니다\n");
		}
		else
		{
			printf("유저가 패배했습니다\n");
		}

	}

	if (playerChoice == 3)
	{
		if (computerChoice == 1)
		{
			printf("유저가 패배했습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 승리했습니다\n");
		}
		else
		{
			printf("유저가 비겼습니다\n");
		}

	}
	
	//if문을 이용해서 

	printf("플레이어의 선택 : %s, 컴퓨터의 선택 : %s\n", playerCharacter, computerCharacter);

	printf("플레이어의 점수:%d 컴퓨터의 점수 : %d\n", playerScore, computerScore);






	if (playerChoice == 1)
	{
		if (computerChoice == 1)
		{
			printf("유저가 비겼습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 패배했습니다\n");
		}
		else//예외 사항을 적어서 나머지로 처리 
		{
			printf("유저가 승리했습니다\n");
		}

	}

	if (playerChoice == 2)
	{
		if (computerChoice == 1)
		{
			printf("유저가 이겼습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 비겼습니다\n");
		}
		else
		{
			printf("유저가 패배했습니다\n");
		}

	}

	if (playerChoice == 3)
	{
		if (computerChoice == 1)
		{
			printf("유저가 패배했습니다\n");
		}
		else if (computerChoice == 2)
		{
			printf("유저가 승리했습니다\n");
		}
		else
		{
			printf("유저가 비겼습니다\n");
		}

	}

	//if문을 이용해서 

	printf("플레이어의 선택 : %s, 컴퓨터의 선택 : %s\n", playerCharacter, computerCharacter);

	printf("플레이어의 점수:%d 컴퓨터의 점수 : %d\n", playerScore, computerScore);
*/
}

