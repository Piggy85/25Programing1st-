#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h> //time 함수를 사용하기 위해

//개발 이력 작성
//가위 바위 보 게임
// 1,0,0 기능 구현 comit 할떄마다 새로운 버전을 추가
// 1.0,1 유저 입력 기능 구현 + 버그 발생( ~)

int game()
{
	int playerChoice;
	int computerChoice=0;
	int playerScore = 0;
	int computerScore = 0;



	for (; playerScore < 5 && computerScore < 5;)
	{
		printf(" 가위 - 1			바위 - 2			보 - 3 \n");
		printf("당신의 선택은?  ");

		scanf("%d", &playerChoice);

		srand(time(NULL)); // 현재 시간을 시드(seed)로 설정 (매번 다른 랜덤값)
		computerChoice = rand() % 3 + 1; // 1~3 사이의 난수 생성

		if (playerChoice == 1)
		{
			if (computerChoice == 1)
			{
				printf("유저가 비겼습니다\n");
			}
			else if (computerChoice == 2)
			{
				printf("유저가 패배했습니다\n");
				computerScore++;

			}
			else//예외 사항을 적어서 나머지로 처리 
			{
				printf("유저가 승리했습니다\n");
				playerScore++;
			}

		}
		else if (playerChoice == 2)
		{
			if (computerChoice == 1)
			{
				printf("유저가 이겼습니다\n");
				playerScore++;
			}
			else if (computerChoice == 2)
			{
				printf("유저가 비겼습니다\n");
			}
			else
			{
				printf("유저가 패배했습니다\n");
				computerScore++;
			}

		}
		else if (playerChoice == 3)
		{
			if (computerChoice == 1)
			{
				printf("유저가 패배했습니다\n");
				computerScore++;
			}
			else if (computerChoice == 2)
			{
				printf("유저가 승리했습니다\n");
				playerScore++;
			}
			else
			{
				printf("유저가 비겼습니다\n");
			}

		}
		else
		{
			printf("재선택 하십시요\n");
		}
		printf("유저의 점수: %d 컴퓨터의 점수: %d\n", playerScore, computerScore);

	}

	return playerScore;
}