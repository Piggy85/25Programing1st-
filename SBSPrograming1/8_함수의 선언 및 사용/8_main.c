// 이름에 이유가 있다 function - 수학시간 
// 외부에서 값을 집어넣어 어떤 과정을 거쳐 특정한 결과과 나오는것(반환)

//함수가 무엇일까? 어떤 두 수를 더했는지 결과값에 출력할 수 있도록 수정해줘


//함수를 왜 쓸까?


//반환값 함수 이름 (매개 변수); 헤드
//{ 바디 } ?내용

// 두 수를 더해서 반환값을 

//메인 함수.
//프로그램을 시작과 끝을 표현하는 기능을 하고 있다.

//함수를 먼저 생성하고 - 생성한 함수를 사용
//반환타입 + 함수이름(매개변수); - 이 작업을 통해서만 함수가 생성된다

//함수를 표현하는 방식에는 4가지 유형
// 반환값 X 인자값 X
//반환값 o 인자값 X
//반환값 X 인자값 o
//반환값 o 인자값 o

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "8_main.h"
#include "스탯.h"

//메인함수보다 밑에 함수가 정의되어 있어도 메인함수 위에 선언하면 이용할 수 있다


int main()
{
	int num1 = 1;
	int num2 = 2;

	AddFunc(num1, num2); // statement (명령'문') Add함수에 num1과 num2를 실행하라
	AddFunc(3, 5); //Add함수를 3 -> num1, 5 -> num2 Add함수를 실행하라
	MinFunc(8, 2);


	MultyFunc(2, 4);
	DivideFunc(0, 0);

	// 플레이어가 낸 가위 바위 보에 해당 하는 숫자를 출력하고 싶다
	/*
	int playerChoice = SelectPlayerBehavior(); //1 가위 , 2바위 , 3보
	printf("플레이어의 선택값 : %d\n ", playerChoice);
	*/

	SelectCharacter(10);

	return 0; //게임에서 종료기능 만들고 싶다 -> 메인함수에서 return을 하도록 만들면 된다 어떤 숫자를 입력하면 프로그램을 종료하겠다
}
//반환값이 없더라도 코드를 수정할 수 있는가? _ 주소의 개념을 이해하면 작성편리				value vs Reference
//함수 안에서만 코드가 실행이 되고 실제로는 변경이 안되는 기능이 필요하다 (ex)  다음 레벨을 보여주는 기능이 실제로 장비의 성능을 변경시키면?

//캐릭터를 선택해서 스탯을 분배하다던가 하는 함수

//함수 안에서는 코드가 잘 실행이 된거 같은데 main 다른 코드는 영향을 끼치지 않는다




/*
int SelectPlayerBehavior()
{
	//가위 바위 보 슈퍼 가위 <- 수정에 용의하다

	int num = 0;
	scanf("%d", &num);

	if (num == 1)
		return 1; //가위
	else if (num == 2)
		return 2; //바위
	else if (num == 3)
		return 3; //보

}
*/
