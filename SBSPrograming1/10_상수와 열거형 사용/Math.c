#include "Math.h"

extern const double PI; //extern 어딘가에 pi가 정의되어있으니 그것을 찾아 쓰라는 뜻

void area_Circle()
{

	double radius = 2;
	printf("반지름의 길이를 입력해주세요 :");
	scanf("%lf", &radius);
	double area_Circle = PI * radius * radius;
	printf("원의 넓이 : %lf\n", area_Circle);
}

void Calculate_CircleDiameter()
{
	//const double pi = 3.14;
	double radius = 2;
	printf("반지름의 길이를 입력해주세요 :");
	scanf("%lf", &radius);
	double Calculate_Circle = PI * 2 * radius;
	printf("원의 둘레 : %lf", Calculate_Circle);
}

void test()
{
	double test = PI;
	printf("테스트 파이 값 :%lf \n", test);
}

// static을 함수 안에 선언하면 어떤 일이 발생하나요?
// 스택 영역과 별개로 데이터가 저장이 된다
//프로그램이 시작할 때 데이터가 저장이 된다
// 지역 변수에 static을 선언하는 이유는 무엇인가요? -> 함수 안에서만 정적으로 사용하겠다

void test2()
{
	static int number = 1;
	int result = 0;
	for (int i = 0 ;i < 10; i++)
	{
		number += i; //number = number + i;
	}
	result = number;
}
