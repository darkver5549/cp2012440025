#include <stdio.h>

//CTRL + K, CTRL + F : Format
//CTRL + K, CTRL + C: Comment Out
//CTRL + K, CTRL + U: Undo
//CTRL + ] : Matching

void main()  {
	//============================�� ���� ��а� ����
	/*
	int count = 1;

	while   (count <= 10)	{
		printf ("Count = %d\n",count++);
	}

	//printf("\n���α׷� ����!!!!!!\n");*/
	////1���� 100���� �� 3�ǹ���� ���
	//int count = 1;
	//
	//while(count<100){
	//	if(count%3==0)
	//		printf("count: %d\n",count++);
	//	count++;
	//}

	////1���� 100���� �� 3�ǹ���� ������ ���� ���
	//int count = 1;
	//
	//while(count<100){
	//	if(count%3!=0)
	//		printf("count: %d\n",count++);
	//	else
	//		count++;
	//}


	//Ű���忡�� ������ �Է� �޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�

	/*int num=0;

	while (2)
	{
		printf("Enter 100 to finish, Enter any other to play\n");
		printf("Enter a number: ");
		scanf("%d",&num);


		if(num==100){
			printf("��\n\n");
			break;
		}
		else if(num>1000){
			printf("�Է��� ���� 1000���� Ů�ϴ�. �ٽ� �Է����ּ���\n\n");
			continue;
		}
		else if(num%3==0)
			printf("*******3�� ����Դϴ�.\n\n");

		else
			printf("3�� ����� �ƴմϴ�.\n\n");

	
	}*/

	//1���� 100������ ������ ���� ���Ͻÿ�
	int sum=0,num=1;

	while(num<=100){
		//sum=sum+num++;
		sum+=num++;
	}

	printf("%d",sum);

	//============================ �� �Ʒ��� ��а� ����
}