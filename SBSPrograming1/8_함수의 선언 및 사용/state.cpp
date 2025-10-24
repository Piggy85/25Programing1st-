
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "스탯.h"

void SelectCharacter(int startPoint)
{
	printf("%d 스탯 포인트를 분배해주세요\n", startPoint);
	printf("STR : 0 DEX : 1 INT : 2 LUK : 3\n");
	int selectNumber = 0;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	for (; startPoint == 0;)
	{
		scanf("%d", &selectNumber);
		if (selectNumber == 0)
		{
			scanf("%d", &spendPoint);
			if (startPoint >= spendPoint)
			{
				startPoint = startPoint - spendPoint;
				STR++;
			}
			printf("남은 스탯 포인트 %d\n", startPoint);
		}
		else if (selectNumber == 1)
		{
			scanf("%d", &spendPoint);
			if (startPoint >= spendPoint)
			{
				startPoint = startPoint - spendPoint;
				DEX++;
			}
			printf("남은 스탯 포인트 %d\n", startPoint);
		}
		else if (selectNumber == 2)
		{
			scanf("%d", &spendPoint);
			if (startPoint >= spendPoint)
			{
				startPoint = startPoint - spendPoint;
				INT++;
			}
			printf("남은 스탯 포인트 %d\n", startPoint);
		}
		else if (selectNumber == 3)
		{
			scanf("%d", &spendPoint);
			if (startPoint >= spendPoint)
			{
				startPoint = startPoint - spendPoint;
				LUK++;
			}
			printf("남은 스탯 포인트 %d\n", startPoint);
		}
	}
	
	printf("STR : %d DEX : %d INT : %d LUK : %d\n", STR, DEX, INT, LUK);
}

