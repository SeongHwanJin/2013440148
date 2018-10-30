// 7. 정수 배열의 합을 반환하는 함수
#include <stdio.h>
//함수이름 addArray()
//입력: 배열
//출럭: 배열 각 요소의 합
//부수효과: 없음
int addArray(int arr[], int length){

	int index = 0;
	int sum = 0;
	while(index < length){
		sum = sum + arr[index];
		index++;
	}
		return sum;
	
}


int main() {
	int a[4] = {10, 20, 30, 40};
	int length = 4;
	printf("the sum is %d\n", addArray(a,4));
	return 0;
}


