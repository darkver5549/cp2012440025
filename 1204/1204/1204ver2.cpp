
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

/*
struct complex {
	double real;
	double imag;
}; //����ü ������ �׻� �����ݷ� ���
*/

typedef struct complex {
	double real;
	double imag;
} Complex;

//typedef struct complex Complex; //�ڷ��� 'struct complex'�� ������ 'Complex'��� �θ���
//������ Ÿ���� ���� ����
typedef int myIntType; //�ڷ��� int�� ������ myIntType �̶�� �θ��ڴ�.

void printComplex(Complex* ptr) {//��κ��� ���, ����ü �����͸� �Ű����ϼ��� ���� �޴´�
	printf("%f + %fj\n", ptr->real, ptr->imag);
}

void conjugate(Complex* ptr) {
	printf("%f + %fj\n", ptr->real, -1 * ptr->imag);
}

//�Լ� returnConjugate
//�Է�: ���Ҽ� ������
//���: ���Ҽ� ����
//�μ�ȿ��: ����

Complex* returnConjugate(Complex* ptr) {
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex)); //�����Ҵ�

	tempPtr->real = ptr->imag; tempPtr->imag = -1 * ptr->real;
	return tempPtr;
}

int main()
{
	Complex a; //struct complex: ������ Ÿ�� // a: ����ü ���� 
			   //==>struct complex a;                 

	a.real = 10;
	a.imag = 20;

	printf("%f\n", a.real);

	printComplex(&a);

	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�
	Complex* ptr;
	ptr = &a;
	ptr->real = 100; //����ü ������ ������ ������� ���� ��� ===> ����ü�����̸�->��������̸�
	ptr->imag = 200;

	Complex* ptr2;

	ptr2 = returnConjugate(&a); printComplex(ptr2);
	free(ptr2); printComplex(ptr2);

	return 0;
}
