
#include <stdio.h>
#include <iostream>

/*
struct complex {
	double real;
	double imag;
}; //구조체 선언은 항상 세미콜론 사용
*/

struct complex {
	double real;
	double imag;
} Complex;

//typedef struct complex Complex; //자료형 'struct complex'를 앞으로 'Complex'라고 부른다
//데이터 타입의 별명 선언
typedef int myIntType; //자료형 int를 앞으로 myIntType 이라고 부르겠다.

int main()
{
	Complex a; //struct complex: 데이터 타입 // a: 구조체 변수 
	           //==>struct complex a;                 

	a.real = 10;
	a.imag = 20;

	printf("%f", a.real);



	return 0;
}
