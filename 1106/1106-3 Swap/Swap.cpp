#include <stdio.h>
#include <iostream>

void swap(int* ptr1, int* ptr2){
	int temp;
	temp = *ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

int main (){
	int a = 10, b = 20;
	//a�� b�� ���� �ٲٱ�

	swap(&a,
		&b);

	printf("a=%d, b=%d \n",a,b);

	return 0;

}