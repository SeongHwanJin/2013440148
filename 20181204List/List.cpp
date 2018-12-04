//Linked List연습
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
int main(){
	Node* pHead=NULL, *ptr; //헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속하자)
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