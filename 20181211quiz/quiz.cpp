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
//�Է�: ���Ḯ��Ʈ�� ����������.(��� �������� ������), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
 void addHead(Node** ppHead, Node* pNewNode){
	 pNewNode-> pNext = *ppHead; //#34
	 *ppHead = pNewNode; //#35
 }
int main() {
	
	double test;
	test = 10/4;//1. (10/4)->2�� ��ȯ, 2.������ 2�� double�� 2.0���� ��ȯ
	//� ������� �Ǽ����� �ϳ��� ������ ��� ����� 2.5�� ���� �� �ִ�. 10.0/4->2.5; but 10/4->2;
	printf("test = %f\n", test);
	test = 10.0/4; //��а� ���ͷ�����.
	printf("test = %f\n", test);
	test = ((double)10) /4; //1.������ 10�� �Ǽ���(double) 10.0���� ��ȯ.
	//10�� double������ ����ȯ�� �Ѵ�. 10->10.0�� �ȴ�.
	printf("test = %f\n", test);
	Node* pHead=NULL, *ptr;
	pHead = createNode(10);//#35
	ptr = createNode(20);
	addHead(&pHead, ptr);//#45

	pHead = NULL;
	addTail(pHead, createNode(100));
	printLL(pHead);
	printf("%f\n", averageLL(pHead));

}