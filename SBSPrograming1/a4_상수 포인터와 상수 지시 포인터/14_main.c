#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Test1();
void Test2();
void Inventory(const int inventory[], const char inventoryText[]);

void AddInventory();

int main()
{
	printf("Test 1 예제코드 구현\n");
	int PlayerX =0 , PlayerY = 0;
	int* PlayerXptr = &PlayerX;
	int* PlayerYptr = &PlayerY;

	Test1(PlayerXptr, PlayerXptr,3,6);
	printf("player의 X의 값 %d Y의 값 %d\n", PlayerX, PlayerY);

	//예제 1. 상수 지시 포인터가 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	double* piPtr = &pi;
	(*piPtr) = *piPtr + 2;

	printf("%f\n", pi); //상수인데 포인터로 가르키니 상수의 값이 바뀜

	//예제 2. const int*로 선언된 포인터 변수는 그 값을 변경하지 못한다
	int boxX = 10;
	const int* const boxXptr = &boxX;

	//(*boxXptr) = (*boxXptr) + 2;  //포인터에 저장되어 있는 값을 수정하지 마십쇼, 상수 지시 포인터(const pointer)

	//예제 3. 상수 포인터, 포인터(주소) 바뀌지 않는다
	int box2 = 5;
	//boxXptr = &box2; *모양 오른쪽에 const 가르키는 주소를 바꿀수 없다
	printf("boxX가 가르키는 수 :%d\n", *(boxXptr));

	//예제 4. 함수에 상수 포인터/ 상수 지시 포인터를 직접 사용해보기
	int playerWallet = 100;
	Test2(&playerWallet);

	//그래서 포인터를 playerWallet을 그냥 출력하면 되는데 왜 주소로 넘기는 이유가 무엇인가?

	int inventory[3] = { 100, 10 , 5 }; // 동전의 수, 레드 포션의 갯수 , 약초의 수

	const char* inventoryText[3] = { "동전" , "레드포션" , "약초" };

	inventory[0] += 100;

	
	
	Inventory(inventory, inventoryText);
	//출력 -> 동전, 레드 포션 , 약초

	//실습 예제 1
	//player2가 현재 가지고 있는 인벤토리 데이터를 출력할 수 있게 만들어 보십쇼
	int inventory2[3] = { 50,20,5 };

	Inventory(inventory2, inventoryText);


	printf("\n");
	//실습 예제2
	//함수를 실행시켜서 플레이어의 소유한 데이터를 변경시키는 함수를 만들어보세요
	AddInventory(inventory2, inventoryText);
}

 
//Test1함수를 보고 이 함수가 어떤 목적으로 사용이 될 건지 분석
//첫번째 요소는 정수형 주소를 - 이름이 X의 ptr
//주소에 저장되어 있는 값을 변경해서 사용하겠다. 5-> amount X 더해서 이 더한 값으로 바꾸겠다

void Test1(int* xptr, int* yptr , int amountX, int amountY) //매개변수가 main에서 전달받은 값으로 초기화하겠다는 뜻
{ //포인터는 주소로 받아야한다
	

	*xptr = (*xptr) + amountX;
	*yptr = (*yptr) + amountY;
}


void Test2(const int * playerWallet) //함수 선언시 호출되는 값이 바뀌지 않게 설정
{
	int a = 10;

	playerWallet = &a;

	//플레이어가 가지고 있는 돈을 출력해줘
	printf("플레이어의 현재 소유 금액 : %d\n", (*playerWallet));
}

void Inventory(const int inventory[], const char* inventoryText[]) //동전을 가르키는 주소가 들어가있다 const char*은 안에 있는 문자의 주소
{
	//첫번째 매개변수에는 int 배열을 넣겠다 두번째 매개변수에는 char 매개변수를 넣겠다

	for (int i = 0; i < 3; i++)
	{
		printf("%s 의 개수 : %d\n", inventoryText[i], inventory[i]);
	}
}

void AddInventory(int inventory[], const char* inventoryText[])
{
	int index = 0;
	int add = 0;
	printf("0에서 2에서의 숫자 사이에서 클릭\n 0번 동전	1번 포션		2번 약초\n");
	scanf("%d", &index);
	printf("%s의 추가할 개수를 입력해주세요\n", inventoryText[index]);
	scanf("%d", &add);
	inventory[index] += add;
}

void Battle()
{

}

void BattleEnd(/*플레이어의 인벤토리 주소를 넘겨야 한다*/)
{
	//AddInventory(받은 매개변수를 여기에 집어넣는다);
}

//const 포인터 왜 같이 쓰는가 = 함수로 사용시에 매겨변수로 받은 값을 바꾸지 않기 위해
//함수에서 어떻게 사용하는가?
