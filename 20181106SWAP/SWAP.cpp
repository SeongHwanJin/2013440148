#include <stdio.h>

/*
int main() {
	int a = 10, b = 20; //5 
	//SWAP: 변수 a,b의 값을 바꾼다.
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
*/
void swap(int* ptr1, int* ptr2) { //2
	int temp; //3
	temp = *ptr1; //4
	*ptr1 = *ptr2; //5
	*ptr2 = temp; //6
}
int main() {
	int a = 100, b = 200; //9
	//SWAP: 변수 a,b의 값을 바꾼다.
	
	swap(&a, &b); //12 
	printf("a = %d, b = %d\n", a, b);

	return 0;
}