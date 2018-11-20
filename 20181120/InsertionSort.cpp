#include <stdio.h>
void printArray(int* arr, int len){ //위에꺼 아래꺼 둘 다 사용가능하다. 배열 받을 때 포인터로 받는다.
	//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}
//함수 : swapElement()
//입력 : 배열, 두개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 요소가 바뀐다. 
void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int* arr, int ele){
	while(ele>0) {
		if(arr[ele-1] > arr[ele])
			swapElement(arr, ele-1, ele);
		else
			break;
		ele--;
	}
}
	/*for(ele; ele!= 0; ele--){
		if( arr[ele-1] > arr[ele])
			swapElement(arr, ele-1, ele);
		//else break;
		*/
//}
void insertionSort(int* arr, int length){
	for(int i=length-1; i!=0; i--){
		insertElement(arr, i);
	}
}


int main(){
	int a[] = {37, 42, 45, 50, 40};
	insertionSort(a,5);
	printArray(a,5);
}