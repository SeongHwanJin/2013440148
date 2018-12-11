#include <stdlib.h>
#include <stdio.h>

int sum(int, int);
int (*fff)(int, int); //fff�� �Լ� �������̴�. �̷��͵� �ִ� ������

typedef struct node{
	int score;
	struct node* pNext;//� �����Ͱ� �ڱ��ڽ��� �� ����Ų��.
}Node;
typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//�Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����
void printLL(LinkedList* pList){ //#12
	Node* ptr = pList -> pHead;
	while(ptr != NULL) {
		printf("score = %d\n", ptr -> score);
		ptr = ptr -> pNext; //#15
	}
}

double averageLL(Node* ptr){
	int sum = 0, count = 0;
	double average;
	while(ptr != NULL){
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;
	}
	average = ((double)sum)/ count;
	return average;
}

//�Լ� addTail()
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ������ ����� ������
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�	
Node* returnTail(Node* ptr){
	if(ptr == NULL) //���Ḯ��Ʈ�� ��尡 ����.
		return NULL;
	while( ptr != NULL){
		if(ptr->pNext == NULL)//������ ����
		return ptr;
		ptr = ptr->pNext;
	}
}

//�Լ� returnTail()
//�Է�: ���Ḯ��Ʈ, �߰��Ϸ��� ��� ����Ʈ
//���: ����
//�μ�ȿ��: �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���.
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error\n");
		return;
	}
	Node* pTail = returnTail(pHead);	
	pTail -> pNext = pNode;
}

//�Լ�: createNode() 
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� ��ȯ�Ѵ�. �� �� score = �Է�, pNext = NULL�� �Ѵ�.
//�μ�ȿ��: ����
Node* createNode(int input){
	Node* ptr; //#23
	ptr = (Node*) malloc(sizeof(Node)); //#24
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//�Լ� addHead()
//�Է�: ���Ḯ��Ʈ�� ����ü ������(LinkedList*), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
 void addHead(LinkedList* pList, Node* pNewNode){
	 if(pList->pHead == NULL)
		 pList->pTail = pNewNode;
	 pNewNode-> pNext = pList -> pHead;//#1
	 pList -> pHead = pNewNode;//#2
	 pList->nNode++;
 }

int main() {
	LinkedList* pList; //#87
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, createNode(10));

	Node* pHead=NULL;// *ptr;
	pHead = createNode(10);//#35
	//ptr = createNode(20);
	addHead(pList, createNode(10));//#45

	pHead = NULL;
	addTail(pHead, createNode(100));
	printLL(pList);
	//printf("%f\n", averageLL(pHead));

}