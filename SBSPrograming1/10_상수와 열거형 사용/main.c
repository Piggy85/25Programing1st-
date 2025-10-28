#include "Math.h"
#include "game.h"

//원의 넓이 구하는 코드를 작성해보세요
//double pi(3.14) r * r

/*
 *const 키워드 : 뒤에 오는 수식어를 고정시킨다 변수의 값을 고정시킨다? 상수
 * 프로그래밍 적으로 기능을 제한해서 실수를 원천적으로 방지한다 => 에러가 발생으로 실수 방지
 */

//전역 변수를 사용하는 것을 지양하라

//const double PI = 3.14; //전역(global) 변수 vs 지역(local) 변수
/*
Math.h에 static 변수를 사용
*/


int main()
{
	const int Mapsize_x, Mapsize_y = 10;
	const int StartMap_x, StartMap_y = 0;







	test();
	test2();

	area_Circle();
	Calculate_CircleDiameter();
}


