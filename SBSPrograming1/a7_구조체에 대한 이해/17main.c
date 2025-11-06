#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//컴퓨터에게 명령을 내리기 위해서다
//숫자만 읽을 수 있다
//자료형 변수. 정수(1,2,4) , 실수(4,8)
//메모리 안에 저장이 되어있다. 시작 주소를 알려주는 문법. 포인터.

typedef enum {
	기사,
	마법사,
	총사,
};



typedef struct{
	int x;
	int y;
}PlayerPos;

typedef struct {
	int hp;
	int ad;
	int ap;
	int p_def;
	int m_def;
} BattleEntity;

typedef struct {
	BattleEntity warrior;
}Warrior;

typedef struct {
	PlayerPos pos;
	BattleEntity Entity;

}Player;

void PrintPos(PlayerPos player);
void PlayerStat(Player player);

//포인터의 크기는 항상 8

int main()
{
	//배열 : 같은 타입의 자료형을 배열을 사용해서 표현할 수 있다.
	//주소 한개로 어떻게 <1 ~ n>?
	// 배열을 포인터로 어떻게 설명할 수 있을까? 표현할 수 있을까?(상수 포인터)

	//구조체. 자료형 선언. 포인터. 배열

	//구조체 what? why?
	//사용자 정의 자료형 User Defined Type -> typedef
	// X좌표 Y좌표

	printf("구조체 사용 이유\n");
	int x = 0;
	int y = 0;

	printf("플레이어의 현재 위치 : [%d,%d]\n", x, y);

	PlayerPos p1 = { 1,5 };
	PlayerPos p2; // p2 이름은 값이 안들어 있는 상태인데, 주소는 배정이 되어 있는 상태
	p2.x = 3;
	p2.y = 5;

	Player player;

	BattleEntity battleEnity = { 1,2,3,4,5 };

	player.Entity = battleEnity;
	player.pos = p1;

	PrintPos(p1);

	PlayerStat(player);

	printf("구조체 포인터 사용 이유\n");

	printf("구조체의 크기 : %d\n", sizeof(Player*));
}

void PlayerStat(Player player)
{
	printf("%d   %d ", player.Entity.ad, player.Entity.ap);
}

void PrintPos(PlayerPos* player) //int 자료형을 2개 저장하고 싶다
{
	printf("플레이어의 현재 위치 : [%d,%d]\n", player->x, player->y);
}