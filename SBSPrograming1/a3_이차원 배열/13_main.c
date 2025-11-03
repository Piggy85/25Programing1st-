#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>   // _getch()
#include <stdlib.h>  // system()

/*
* 배열의 활용
* 2차원 배열
* 게임에서 적용
*/

/*
플레이어  : !
몬스터    : @
함정      : #
*/

// 플레이어 조작

#define MAPSIZE 30 //MAPSIZE는 10으로 치환하라는 의미

int monsterx = 7;
int monstery = 7;

void update_value(char key) {
	// 입력된 키를 소문자로 변환하여 대소문자 모두 처리 가능하게 함
	char lower_key = tolower(key);

	if (lower_key == 'd') {
		monsterx += 1; // 'd' 또는 'D' 입력 시 +1
	}
	else if (lower_key == 'a') {
		monsterx -= 1; // 'a' 또는 'A' 입력 시 -1
	}
	else if (lower_key == 'w') {
		monstery += 1; // 'w' 또는 'W' 입력 시 +1
	}
	else if (lower_key == 's') {
		monstery -= 1; // 's' 또는 'S' 입력 시 -1
	}
	else if (lower_key == 'q' || lower_key == 27) { // 'q' 또는 ESC 키 (아스키 코드 27)
		printf("\n프로그램을 종료합니다.\n");
		exit(0); // 프로그램 종료
	}
}

void PlayerMove(int* playerX, int* playerY);

int main()
{
	//Text로 출력을 해야한다. -> 문자로 표현해야한다
	int mapX;
	int mapY;

	char MAP[MAPSIZE][MAPSIZE] =
	{ { '!',' ' ,'@',' ' ,'#' },
		{'@' },
		{'@' },
		{'@' },
		{'@' },
		{'@' }
	};
	//(0,0)
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", MAP[h]);
	}

	const char Player = '!';

	const char MONSTER = '@';

	const char MONEY = '$';

	const char WALL = '#';

	char Stage[MAPSIZE][MAPSIZE];

	for (int h = 0; h < MAPSIZE; h++)
	{
		if (h == 0 || h == MAPSIZE - 1) // shift 역슬래쉬 ||
		{
			for (int w = 0; w < MAPSIZE; w++)
			{

				if (w == MAPSIZE - 1)
				{
					Stage[h][w] = '\0';
				}
				else
				{
					Stage[h][w] = WALL;
				}
			}
		}
		else
		{
			for (int w = 0; w < MAPSIZE; w++)
			{
				if (w == 0 || w == MAPSIZE - 2)
				{
					Stage[h][w] = WALL;
				}
				else if (w == MAPSIZE - 1)
				{
					Stage[h][w] = '\0';
				}
				else
				{
					Stage[h][w] = ' ';
				}
			}
		}
	}

	char key;

	Stage[4][7] = MONEY;
	Stage[monsterx][monstery] = MONSTER;

	//세팅된 맵을 화면에 보이게 하라
	for (int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", Stage[h]);
	}

	while (1)
	{
		int x = 2; 
		int y = 4;
		PlayerMove(&x, &y);
		Stage[x][y] = Player;
	}

		/*
		Initilaize();
		Setup();

		while (1)
		{
			//게임이 실행되는 순서의 로직을 작성해야 한다

			//초기화 : 데이터가 없으면 기본 값으로 설정하고, 초기값을 설정한다

			// 데이터가 변동 (게임 루프) Update

			Update();
			Render(); // 화면에 그려주세요
			Buffer();//포인터의 개념을 배워야한다
		}
		*/
	
}

void PlayerMove(int* playerX, int* playerY)
{
	char move = '%0';
	scanf("%c", move);
	if (move == 'd')
	{
		*playerX += 1;
	}
	else if (move == 'a')
	{
		*playerX -= 1;
	}
	else if (move == 'w')
	{
		*playerX -= 1;
	}
	else if (move == 's')
	{
		*playerX += 1;
	}
}