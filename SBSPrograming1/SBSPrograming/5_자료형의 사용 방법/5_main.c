#include <stdio.h>
#include <stdint.h>

int main()
{
	printf("5강 시작\n");

	//정수와 실수를 구분해야 한다
	// 메모리의 크기를 지정해 줄 수 있다

	//1바이트의 크기를 저장할 수 있고 데이터를 읽는 방식은 정수다

	//정수형태의 자료형들 char short int long longlong
	char num1; // num1의 char 자료형태로 데이터를 저장할 수 있게 변수 선언
	short num2;
	int num3;
	long num4;
	long long num5;

	printf("char 데이터의 크기 : %llu\n", sizeof(char));//바이트의 크기
	printf("short 데이터의 크기 : %llu\n", sizeof(short));
	printf("int 데이터의 크기 : %llu\n", sizeof(int));
	printf("long 데이터의 크기 : %llu\n", sizeof(long));
	printf("long long 데이터의 크기 : %llu\n", sizeof(long long));

	//%llu에 대해서 
	//size of는 자료형의 바이트 크기에 대해 설명

	int16_t num11 = 1;
	int32_t num22 = 1;
	int64_t num33 = 1;
	printf("int16_t 자료형의 크기 : %llu\n", sizeof(int16_t));
	printf("int32_t 자료형의 크기 : %llu\n", sizeof(int32_t));
	printf("int64_t 자료형의 크기 : %llu\n", sizeof(int64_t));

	//오버플로우
	//부호가 있는 정수, 부호가 없는 정수 -> MSB 0,1 (0양수 , 1음수)
	//unsigned << 양수만 표현하겠다 

	char level = 1;
	level = level + 128;
	printf("현재 레벨 : %d\n", level);

	//적은 크기의 데이터를 저장하는데 불필요한 공간을 사용할 수 있다

	unsigned char level2 = 129;
	printf("핸재 레벨 : %d\n", level2);

	// -5를 비트로 표현을 하고 싶다.
	// 비트를 모두 반대로 변환하고 1을 더해준다 => 2의 보수법

	//소수점이 있는 숫자
	//float double long double
	float n1=0.324525f;
	double n2 = 0.032321;
	long double n3 = 0.3134155132;

	printf("%llu\n", sizeof(float));
	printf("%llu\n", sizeof(double));
	printf("%llu\n", sizeof(long double));

	//4바이트 32
	//[ 정수 16개(1자리는 부호) ][ 소수점16개 ]

	//[1][몇 승 증가했는가?][유효 숫자는 얼마인가?]
	//13000 -> 1,3 * 10의 4승
	//0.0123 = 1.23 * 10의 -2승

	//고정 소수점 : 정확한 소수를 표현할 수 있다, 소수를 표현하기에는 공간이 너무 부족하다
	//부동 소수점 : 2의?승 + 유효숫자 표기, 소수점이 정확하지 않다
	//실험실 결과 추론 코드로 결과를 유추할 수 있다
	//특정 자리수 까지만 사용하겠다

	//문자를 표현하는 방법

	char character1 = 97; //a
	short character2 = 97; //a
	int character3 = 97; //a
	double character4 = 97; //실수로 표현하는 double로 했기에 다른 결과값이 나옴

	printf("%c\n", character1);
	printf("%c\n", character2); //문자를 표현 -> 낭비되는 메모리가 있다
	printf("%c\n", character3); //문자를 표현
	//printf("%c\n", character4); character4에는 97값이 안들어 있기 떄문에 문자를 제대로 표현하지 못했다

	//char 문자를 표현하는 타입이다
	//다른 나라의 언어를 표현하기에는 너무 작다
	//계속해서 확장 cp949 2바이트
	//UTF-8 유니코드, 통일성 , <최신방식> 3바이트
	// 한글을 표현하는 방식에 대해서 조사 !!. 컴퓨터는 숫자만 이해할수 있다 각 국가의 언어로 바꾸는것 [인코딩 , 디코딩] 
}