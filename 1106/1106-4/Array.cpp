#include <stdio.h>
void printArray(int arr[],int len){
	for(int index =0;index <len;index++){
		printf("array[%d] = %d \n",index, arr[index]);
	}


}

int main(){
	int a[3]={10,20,30};

	printArray(a,3); //�迭�� ����: �迭�̸�:a, �迭����:3
	int* ptr;
	//�迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ��� �ȴ�.
	ptr = a; //-->ptr --> &a[0]
	
	printf("a[0] = %d\n",a[0]);
	printf("a[0] = %d\n",*ptr);
	printf("a[0] = %d\n",ptr[0]);

	printf("a[0] = %d\n",a[1]);
	printf("a[0] = %d\n",*(ptr+1));
	printf("a[0] = %d\n",ptr[1]);


	return 0;
}