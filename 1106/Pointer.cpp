#include <stdio.h>

//C Pointer -> �޸� �ּ�
//

int main(){
	int a = 10; //���� ���� + ���� �ʱ�ȭ
	int* ptr; // int* ptr -> C++ / int *ptr -> C //������ ���� ����
	ptr = &a; // &a equals "Address of" a // ���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�
	*ptr = 20; // *ptr means "Data of" ptr //������ ���� ptr�� ����Ű�� ���� ������
	printf ("a=%d \n",a);

	return 0;














}