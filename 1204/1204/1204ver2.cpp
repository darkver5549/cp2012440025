
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
struct complex {
	double real;
	double imag;
}; //구조체 선언은 항상 세미콜론 사용
*/

typedef struct complex {
	double real;
	double imag;
} Complex;

//typedef struct complex Complex; //자료형 'struct complex'를 앞으로 'Complex'라고 부른다
//데이터 타입의 별명 선언
typedef int myIntType; //자료형 int를 앞으로 myIntType 이라고 부르겠다.

void printComplex(Complex* ptr) {//대부분의 경우, 구조체 포인터를 매개벼니수로 전달 받는다
	printf("%f + %fj\n", ptr->real, ptr->imag);
}

void conjugate(Complex* ptr) {
	printf("%f + %fj\n", ptr->real, -1 * ptr->imag);
}

//함수 returnConjugate
//입력: 복소수 포인터
//출력: 복소수 변수
//부수효과: 없음

Complex* returnConjugate(Complex* ptr) {
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex)); //동적할당

	tempPtr->real = ptr->imag; tempPtr->imag = -1 * ptr->real;
	return tempPtr;
}

int main()
{
	Complex a; //struct complex: 데이터 타입 // a: 구조체 변수 
			   //==>struct complex a;                 

	a.real = 10;
	a.imag = 20;

	printf("%f\n", a.real);

	printComplex(&a);

	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다
	Complex* ptr;
	ptr = &a;
	ptr->real = 100; //구조체 포인터 변수의 멤버변수 접근 방법 ===> 구조체변수이름->멤버변수이름
	ptr->imag = 200;

	Complex* ptr2;

	ptr2 = returnConjugate(&a); printComplex(ptr2);
	free(ptr2); printComplex(ptr2);

	return 0;
}
