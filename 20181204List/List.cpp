//Linked List����
#include <stdlib.h>
#include <stdio.h>
typedef struct node{
	int score;
	struct node* pNext;//� �����Ͱ� �ڱ��ڽ��� �� ����Ų��.
}Node;
//�Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����
void printLL(Node* ptr){ //#12
	while(ptr != NULL) {
		printf("score = %d\n", ptr -> score);
		ptr = ptr -> pNext; //#15
	}
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
//�Է�: ���Ḯ��Ʈ�� ����������.(��� �������� ������), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
 void addHead(Node** ppHead, Node* pNewNode){
	 pNewNode-> pNext = *ppHead; //#34
	 *ppHead = pNewNode; //#35
 }
int main(){
	Node* pHead=NULL, *ptr; //������� ������. NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
//	Node a,b; //#9
//	a.score = 10; b.score = 20; //#10
//	a.pNext = &b; b.pNext = NULL;//#11
//	pHead = &a;
	pHead = createNode(10);//#35
	ptr = createNode(20);
	//pHead-> pNext = createNode(20);//#36
	//printLL(pHead); //#25
	addHead(&pHead, ptr);//#45
	printLL(pHead);
	return 0;
}