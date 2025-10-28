#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


const static double PI = 3.14;// 파란색이 특별한 의미를 가지고 있음
//기본으로는 정적의 의미 = 여러개의 함수가 있고 공통으로 사용하는 변수를 선언하고 싶다
// 전역변수로만 쓰면 static이 모든 소스 코드에서 사용할 가능성이 생긴다

//static은 외부 파일에서 접근 불가 / 전역변수는 외부 파일이 접근 가능

void area_Circle();
void Calculate_CircleDiameter();
void test();
void test2();