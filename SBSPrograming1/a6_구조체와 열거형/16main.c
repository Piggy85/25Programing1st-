#include "Sample.h"

/*
* 열거형
*  - 상수 : 값을 고정시키겠다?
*  - const 변수 선언;
*  - #define PI 3.14; 
*/

// 열거(나열하다)형 : 각 숫자마다 의미를 부여

// 열거형 간결하게 사용하는 방법 typedef

//조건문과 열거형을 같이 사용하는 패턴 =>

#define MonsterCount 5 //전처리 지시문
#define MonsterRace 5 //규모가 커질수록 
#define Human 4

//한글을 해석하는데 2가지 방법

typedef enum { //무명 형식 (코드의 간략화)
	오크 = 1,
	인간,
	언데드,
	천사,
	예외 = 100 //100이 나오면 에러 처리

}Race; //typedef를 통해 전역변수에서 타입(int,double)으로 바뀜

enum GameText { //GameText 범위 안에서 선택 (카테고리)
점수, //이 글자를 0으로 읽겠다
동전,
체력
}GameText; // <- 얘를 변수로 쓰겠다



int main()
{
	//상수는 값을 변경하지 못하게 하는 방법이다.
	const  int Count = 10; //지역 변수
	printf("몬스터의 수 : %d\n", MonsterCount);
	printf("몬스터의 수 : %d\n", Count);

	const char* Text[3] = { "점수", "동전" , "체력" };

	printf("%s", Text[점수]); //숫자를 어떠한 의미를 가지도록 약속을 했다.
	printf("%s\n", Text[1]);

	enum GameText newGameText = 점수; 
	newGameText = 동전;
	
/*
	if (newGameText == 점수)//점수는 정수 0
	{
		printf("점수를 출력하는 예제 입니다\n");
		//점수인 경우에 무엇을 해라.
		// score를 화면에 출력하라
	}
	else if (newGameText == 동전)
	{
		printf("동전을 출력하는 예제 입니다\n");
	}
	else if (newGameText == 체력)
	{
		printf("체력을 출력하는 예제 입니다\n");
	}
*/
	Race race = 오크; //enum GameText를 Race를 쓰면 자동 처리

	switch (race) //조건에 맞는 값을 찾고 그 뒤로 순차적으로 실행
	{
	case 오크: printf("나는 종족이 오크입니다\n");
		break; //break를 통해 이 조건만 출력
	case 인간 :
		break;
	case 언데드:
		break;
	case 천사:
		break;
	default: race = 예외;
		break;
	}

	Job MyJob = 전사;

	SelectJob(&MyJob); //직업을 선택하는 함수

	int Hp, Attack, Defend = 0;

	SetPlayerStat(MyJob , &Hp , &Attack , &Defend);

	printf("당신의 직업의 체력은 %d 공격력은 %d 방어력은 %d\n", Hp, Attack, Defend);

}