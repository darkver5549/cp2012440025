//Linked list ����

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int score;
	struct node* pNext;
	
} Node;

//�Լ� printLL()
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����

void printLL(Node* ptr) {
	while (ptr != NULL) //while (ptr != NULL) : LinkedList���� ������ ���� ��; 
	{
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}
//�Լ� createNode() 
//�Է�:����
//���:����ϳ��� �����Ҵ����� �����Ͽ� ����ʸ� ��ȯ�Ѵ�. �� �� score=�Է�, pNext=NULL�� �Ѵ�.
//�μ�ȿ�� ����
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//�Լ� addhead()
//�Է�: ���Ḯ��Ʈ, �� ���
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addhead(Node** ppHead, Node* pNewnode) //
{
	pNewnode->pNext = *ppHead;
	*ppHead = pNewnode;

}

int main() {
	Node *pHead = NULL, *ptr; //������� ������, NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
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