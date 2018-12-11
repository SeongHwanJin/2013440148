#include <stdlib.h>
#include <stdio.h>

int sum(int, int);
int (*fff)(int, int); //fff는 함수 포인터이다. 이런것도 있다 정도만

typedef struct node{
	int score;
	struct node* pNext;//어떤 포인터가 자기자신을 또 가리킨다.
}Node;
typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//함수 printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음
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

//함수 addTail()
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 마지막 노드의 포인터
//부수효과: 연결리스트 헤드에 새 노드를 추가	
Node* returnTail(Node* ptr){
	if(ptr == NULL) //연결리스트에 노드가 없음.
		return NULL;
	while( ptr != NULL){
		if(ptr->pNext == NULL)//마지막 노드다
		return ptr;
		ptr = ptr->pNext;
	}
}

//함수 returnTail()
//입력: 연결리스트, 추가하려는 노드 포인트
//출력: 없음
//부수효과: 추가하려는 노드가 연결리스트의 tail로 추가됨.
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error\n");
		return;
	}
	Node* pTail = returnTail(pHead);	
	pTail -> pNext = pNode;
}

//함수: createNode() 
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 반환한다. 이 때 score = 입력, pNext = NULL로 한다.
//부수효과: 없음
Node* createNode(int input){
	Node* ptr; //#23
	ptr = (Node*) malloc(sizeof(Node)); //#24
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}
//함수 addHead()
//입력: 연결리스트의 구조체 포인터(LinkedList*), 새 노드 포인터
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
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