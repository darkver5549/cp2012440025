#include <stdio.h>
void printArray(int arr[],int len){
	for(int index =0;index <len;index++){
		printf("array[%d] = %d \n",index, arr[index]);
	}


}

int main(){
	int a[3]={10,20,30};

	printArray(a,3); //배열의 선언: 배열이름:a, 배열길이:3
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a; //-->ptr --> &a[0]
	
	printf("a[0] = %d\n",a[0]);
	printf("a[0] = %d\n",*ptr);
	printf("a[0] = %d\n",ptr[0]);

	printf("a[0] = %d\n",a[1]);
	printf("a[0] = %d\n",*(ptr+1));
	printf("a[0] = %d\n",ptr[1]);


	return 0;
}