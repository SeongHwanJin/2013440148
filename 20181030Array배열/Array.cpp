#include <stdio.h>
//함수 printArray(맘대로 바꾸지 마라)
//입력: 배열
//출력: 없음
//부수효과: 화면에 모든 요소를 출력
void printArray(int arr[], int length) { //배열이름[], 배열길이)
	int count = 0;
	while(count < length) {
		printf("a[%d] = %d\n", count, arr[count]); //a[변수] 가능. powerful.
		count++;
	}
}
int main() {
	int len = 4;
	//배열 선언
	//1. 배열의 이름: a
	//2. 요소의 자료형: int
	//3. 배열의 길이: 4
	//int a[4];//배열 선언(4개 들어갈 공간을 확보) 근데 index는 0부터 시작함 c에서는.그래서 index는 0.1.2.3
	//a[0] = 20;
	//a[1] = 200;
	//a[2] = 2000;
	//a[3] = 20000;
	int a[4]  = { 2, 20 , 200, 2000 }; //배열 초기화 방법
	//int arr[] = {3, 30, 300}//길이 3의 배열 생성(저절로 생성됨)
	//배열을 매개변수로 함수에 던지는 방법.
	/*while(count < len) {
		int count = 0;
		printf("a[%d] = %d\n", count, a[count]); //a[변수] 가능. powerful.
		count++;
	}*/
	printArray(a,len); //배열을 매개변수로 (배열의 이름 a, 배열의 길이 len)
	printf("%d\n", a[100]); //101번째 element access했는데 error가 안난다.
	return 0;
}
	