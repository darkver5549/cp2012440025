#include <stdio.h>

//C Pointer -> 메모리 주소
//

int main(){
	int a = 10; //변수 선언 + 변수 초기화
	int* ptr; // int* ptr -> C++ / int *ptr -> C //포인터 변수 선언
	ptr = &a; // &a equals "Address of" a // 변수 a를 위해 할당한 메모리의 첫번째 주소
	*ptr = 20; // *ptr means "Data of" ptr //포인터 변수 ptr이 가리키는 곳의 데이터
	printf ("a=%d \n",a);

	return 0;














}