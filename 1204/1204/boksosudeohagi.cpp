#include <stdio.h>
#include <iostream>

typedef struct complex {

	double real;
	double imag;



} Complex;

void Sum(Complex* num1, Complex* num2) {
	Complex temp1, temp2;

	temp1.real = num1->real;
	temp1.imag = num1->imag;

	temp2.real = num2->real;
	temp2.imag = num2->imag;

	printf("%f+%fj\n", temp1.real + temp2.real, temp1.imag + temp2.imag);

}

int main() {

	Complex* ptr1;
	Complex* ptr2;

	ptr1->real = 10;
	ptr1->imag = 20;


	ptr2->real = 10;
	ptr2->imag = 20;



	Sum(ptr1, ptr2);








	return 0;
}