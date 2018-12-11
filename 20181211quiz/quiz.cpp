#include <stdlib.h>
#include <stdio.h>
typedef struct node{
	int score;
	struct node* pNext;//어떤 포인터가 자기자신을 또 가리킨다.
}Node;

//함수 printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트(연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음
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
//입력: 연결리스트의 이중포인터.(헤드 포인터의 포인터), 새 노드 포인터
//출력: 없음
//부수효과: 연결리스트 헤드에 새 노드를 추가
 void addHead(Node** ppHead, Node* pNewNode){
	 pNewNode-> pNext = *ppHead; //#34
	 *ppHead = pNewNode; //#35
 }
int main() {
	
	double test;
	test = 10/4;//1. (10/4)->2를 반환, 2.정수형 2를 double형 2.0으로 변환
	//어떤 계산형에 실수형이 하나라도 있으면 계산 결과는 2.5가 나올 수 있다. 10.0/4->2.5; but 10/4->2;
	printf("test = %f\n", test);
	test = 10.0/4; //요론게 리터럴들임.
	printf("test = %f\n", test);
	test = ((double)10) /4; //1.정수형 10을 실수형(double) 10.0으로 변환.
	//10을 double형으로 형변환을 한다. 10->10.0이 된다.
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