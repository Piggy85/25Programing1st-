#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//중괄호는 영역을 표현하는 녀석
//함수 해더 () => { }
//자료현 int x 100개 { }

int main()
{
	//반복적으로 사용되는 자료형을 배열로 표현한다 코드를 개선하기 위함
	//배열 사용(1)

	int numArray[] = { 1,2,3,4 };
	printf("%d\n", numArray[1]);
	printf("%d\n", numArray[3]);

	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 값 :%d\n",i, numArray[i]);
	}

	int numArray2[100]; //int형 자료형이 100개 저장될수 있는 공간을 선언한다

	//sizeof(변수이름) -> 바이트의 크기를 반환해줍니다

	int a = 4;

	printf("a의 크기 ㅣ %llu Byte\n", sizeof(a));

	printf("numArray의 자료형의 수 : %llu\n", sizeof(numArray)/sizeof(int)); 
	printf("numArray의 크기 : %lluBTYE\n", sizeof(numArray2));
	//
	
	//문자를 직접 표현
	//플레이어의 이름 : 설정
	//플레이어 이름을 저장할수 있는 공간을 만들고, 이 공간에 입력받은 데이터를 저장하고 싶다

	char c1 = 'h';
	char c2 = 'i';

	printf("%c%c\n", c1, c2);

	char text[] = "안녕";
	printf("%s\n", text);
	printf("Text의 크기: %llu\n", sizeof(text)); //5바이트 출력

	//NPC대화를 하는데 NPC 첫번쨰 대화를 했을때 할말 dialouge ->  안녕하세요 <- 배열로 표현

	char name[10];

	printf("리터럴문자의 주소 %x\n", "안녕하세요");
	printf("리터럴문자의 주소 %x\n", "안녕하세요");

	scanf("%s", name);

	//strcmp(const char* str1, const char* str2); 문자열의 비교

	if (name == "가위")
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}

	//name "리터럴문자" 주소가 다르다. 저장되는 영역이 다르기 때문
	//문자열의 비교 함수로 만들어본다. 실행할 수 있게 본다

	//name 가위 들어있는 내용은 같다

	//두 개의 문자열에 값을 비교하는 방법 -> strcmp
	//mircrosoft strcmp

	if (strcmp(name, "가위") == 0)
	{

	}
}

