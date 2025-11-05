#include "Sample.h"

void SelectJob(Job* MyJobPtr)
{
	int Input = 0;

	printf("종족을 선택하세요");
	scanf("%d", &Input); //열거형의 값은 못 바꾸니

	*MyJobPtr = Input;
	//또는
	Job tempJob = *MyJobPtr; // if문을 쓸때 

	switch (*MyJobPtr)
	{
	case 전사:
		printf("전사를 선택했습니다\n");
		break;
	case 마법사:
		printf("마법사를 선택했습니다\n");
		break;
	case 궁수:
		printf("궁수를 선택했습니다\n");
		break;
	case 도적:
		printf("도적을 선택했습니다\n");
		break;
	default :
		printf("입력이 잘못되었습니다\n");
		SelectJob(MyJobPtr);
		break;
	}

}

void SetPlayerStat(Job Select, int* HpPtr, int* AtkPtr, int* DfPtr)
{
	switch (Select)
	{
	case 전사:
		*HpPtr = 200; *AtkPtr = 40; *DfPtr = 70;
		break;
	case 마법사:
		*HpPtr = 80; *AtkPtr = 100; *DfPtr = 40;
		break;
	case 궁수:
		*HpPtr = 100; *AtkPtr = 90; *DfPtr = 40;
		break;
	case 도적:
		*HpPtr = 150; *AtkPtr = 70; *DfPtr = 30;
		break;	
	default:
		printf("정의되지 않은 직업입니다\n");
		break;
	}
}


//턴제 게임 생성