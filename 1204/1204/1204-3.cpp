//Linked list 연습

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext;
	
} Node;

//함수 printLL()
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음

void printLL(Node* ptr) {
	while (ptr != NULL) //while (ptr != NULL) : LinkedList에서 굉장히 자주 씀; 
	{
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}
//함수 createNode() 
//입력:성적
//출력:노드하나를 동적할당으로 생성하여 포잍너를 반환한다. 이 때 score=입력, pNext=NULL로 한다.
//부수효과 없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//함수 addhead()
//입력: 연결리스트, 새 노드
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
void addhead(Node** ppHead, Node* pNewnode) //
{
	pNewnode->pNext = *ppHead;
	*ppHead = pNewnode;

}

int main() {
	Node *pHead = NULL, *ptr; //헤드노드의 포인터, NULL이면 연결리스트가 없다는 의미(로 약속하자)
	Node* ptr2 = NULL;
	//Node a, b;
	//a.score = 10; b.score = 20;
	//a.pNext = &b; b.pNext = NULL;

	pHead = createNode(10);
	//pHead->pNext = createNode(20);
	ptr = createNode(40);
	
	addhead(&pHead, ptr);

	printLL(pHead);


	return 0;
}