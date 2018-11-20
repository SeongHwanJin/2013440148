#include <stdio.h>

void printArray(int* arr, int len){ //������ �Ʒ��� �� �� ��밡���ϴ�. �迭 ���� �� �����ͷ� �޴´�.
	//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

//�Լ� : findMinIndex()
//�Է� : �迭(�迭�� �̸�, �迭����)
//��� : �ּҰ��� �ε���
//�μ�ȿ�� : ����.

int findMinIndex(int* arr,int length, int startpoint){
	int minIndex= startpoint;
	for(startpoint; startpoint< length; startpoint++){
    if( arr[minIndex] > arr[startpoint] )
		minIndex = startpoint;
	}
	return minIndex;
}
//�Լ� : findMin()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �迭 �ּڰ�
int findMin(int* arr,int length){
	int min=arr[0];
	for(int count=0; count< length; count++){
    if( min > arr[count] )
		min = arr[count];
	}
	return min;
}
//�Լ� : swapElement()
//�Է� : �迭, �ΰ��� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� ��Ұ� �ٲ��. 
void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
//�Լ� : selectionSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�
void selectionSort(int* arr, int length){
	for(int count = 0; count < length; count++){
		swapElement(arr, count, findMinIndex(arr, length, count));

}
}
int main(){
	int a[] = {30, 35, 27, 15, 40};
	//printf("minimum value of the array is %d\n", findMin(a,5));
	//printf("The index of the minimum value is %d\n", findMinIndex(a,5));
	printArray(a,5);
    selectionSort(a, 5);
	printArray(a,5);
}


	
	