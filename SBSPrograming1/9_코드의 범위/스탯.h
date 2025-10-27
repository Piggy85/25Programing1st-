#pragma once
#include <stdio.h>

void StartState(int State)
{
	int FirstState = 10;

	int giveState;
	for (; FirstState > 0; )
	{
		printf("남은 할당 스탯 : %d\n", FirstState);
		scanf("%d", &giveState);
		if (giveState < FirstState)
		{

		}
		FirstState = FirstState - giveState;
	}
	

	

}

