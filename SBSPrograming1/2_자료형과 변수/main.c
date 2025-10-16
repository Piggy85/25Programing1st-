/*
* 날짜 : 2025-10-16 
* 학습목표 : 자료형과 변수
* 실습목표 : 실제 게임을 분석해서 자료형을 이해한다
*/

// 자료형 Data Tyoe
// Data : 컴퓨터 상에서 숫자,그림,기호 정의되어 있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶다
// 더블킬(문자) , 킬수 스코어 정보(정수), 스탯 정보(실수)
// 이미지 1920 * 1080 이미지를 표현하기 위해 픽셀 수 소리(파장)
//자료들의 특징에 따라 형태를 분류 type을 분류했다 -> 자료형 탄생
// 자료형 : 문자 , 정수 , 실수


//코드는 메인함수의 위에서 아래로 실행

#include <stdio.h>

int main()
{
	//더블킬 게임 화면에 출력하고 싶다
	printf("더블 킬\n");

	//레드팀과 블루팀의 스코어를 출력하고 싶다
	printf("10 vs 20\n");
	//챔피언이 가지고 있는 스탯을 출력하고 싶다
	printf("AD ; 20\n");
	////////////////////////////////////////////////
	
	// %%d 를 쓰면 %d로 출력
	printf("가렌의 정보\n");
	int level = 2;

	int GarenfirstlevelHP = 690;
	float GarenGrowthHP = 98.23f;
	
	printf("체력	| %d (+%f)\n" , GarenfirstlevelHP , GarenGrowthHP); //%d 정수 넣는곳
	printf("현재 체력 : %f \n", GarenfirstlevelHP + (level - 1) * GarenGrowthHP); //%f 실수

	int GarenfirstlevelMP = 0;
	float GarenGrowthMP = 2.76;

	printf("마나	| %d (+%f)\n", GarenfirstlevelMP, GarenGrowthMP);
	printf("현재 마나 : %f \n", GarenfirstlevelMP + (level - 1) * GarenGrowthMP);

	int Garenfirstlevelpower = 69;
	float GarenGrowthpower = 4.5;

	printf("공격력	| %d (+%f)\n", Garenfirstlevelpower, GarenGrowthpower);
	printf("현재 공격력 : %f \n", Garenfirstlevelpower + (level - 1) * GarenGrowthpower);
	
	int Garenfirstleveldefense = 38;
	float GarenGrowthdefense = 4.2;

	printf("방어력	| %d (+%f)\n", Garenfirstleveldefense, GarenGrowthdefense);
	printf("현재 방어력 : %f \n", Garenfirstleveldefense + (level - 1) * GarenGrowthdefense);

	printf("따라큐의 정보");
	int level = 50;
	float EXP = 2730.23;

	printf("다음 레벨까지 필요 레벨 : %f", EXP);
	
	int MimikyuHP = 55;
	printf("따라큐의 현재 체력 : %d", MimikyuHP);

	int MimikyuAttack = 90;
	printf("따라큐의 현재 공격력 : %d", MimikyuAttack);

	int MimikyuDefense = 80;
	printf("따라큐의 현재 방어력 : %d", MimikyuDefense);

	int MimikyuSpAttack = 50;
	printf("따라큐의 현재 특수공격력 : %d", MimikyuSpAttack);
	
	//다음 레벨업마다 다른 스탯 증가

	//분석해보고 싶은 게임 선택
	//분석해보고 싶은 수치를 선택 측정

	return 0;
}