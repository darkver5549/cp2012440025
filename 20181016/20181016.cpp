#include <stdio.h>

//CTRL + K, CTRL + F : Format
//CTRL + K, CTRL + C: Comment Out
//CTRL + K, CTRL + U: Undo
//CTRL + ] : Matching

void main()  {
	//============================이 위도 당분간 무시
	/*
	int count = 1;

	while   (count <= 10)	{
		printf ("Count = %d\n",count++);
	}

	//printf("\n프로그램 종료!!!!!!\n");*/
	////1에서 100까지 중 3의배수만 출력
	//int count = 1;
	//
	//while(count<100){
	//	if(count%3==0)
	//		printf("count: %d\n",count++);
	//	count++;
	//}

	////1에서 100까지 중 3의배수를 제외한 수만 출력
	//int count = 1;
	//
	//while(count<100){
	//	if(count%3!=0)
	//		printf("count: %d\n",count++);
	//	else
	//		count++;
	//}


	//키보드에서 정수를 입력 받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다

	/*int num=0;

	while (2)
	{
		printf("Enter 100 to finish, Enter any other to play\n");
		printf("Enter a number: ");
		scanf("%d",&num);


		if(num==100){
			printf("끝\n\n");
			break;
		}
		else if(num>1000){
			printf("입력한 수가 1000보다 큽니다. 다시 입력해주세요\n\n");
			continue;
		}
		else if(num%3==0)
			printf("*******3의 배수입니다.\n\n");

		else
			printf("3의 배수가 아닙니다.\n\n");

	
	}*/

	//1에서 100까지의 정수의 합을 구하시오
	int sum=0,num=1;

	while(num<=100){
		//sum=sum+num++;
		sum+=num++;
	}

	printf("%d",sum);

	//============================ 이 아래도 당분간 무시
}