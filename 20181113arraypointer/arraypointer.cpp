#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
//void printArray(int arr[], int len){ //배열의 함수에다가 던지려면 배열과 배열의 길이 필요
void printArray(int* arr, int len){ //위에꺼 아래꺼 둘 다 사용가능하다. 배열 받을 때 포인터로 받는다.
	//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

int main() {
	int a[3] = {10, 20, 30}; //배열의 선언: 배열이름: a, 배열길이: 3 //13
	int* ptr; //14
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	printArray(a, 3);
	



	//a = ptr; //error WHY? 배열의 이름은 값만 가지고 있다.즉 rvalue이다.
	//10 = a[2];



	//printArray(a, 3);

	return 0;
}