#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifndef Job_H //만약 정의가 되어 있으면 사용해라

#define Job_H 

typedef enum
{
	전사,
	마법사,
	궁수,
	도적,
	정의X = 100
}Job;

#endif // !1

void SelectJob(Job* MyJobPtr);

void SetPlayerStat(Job Select, int* HpPtr, int* AtkPtr, int* DfPtr);

