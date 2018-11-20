#include <stdio.h>
void printArray(int* arr, int len){ //������ �Ʒ��� �� �� ��밡���ϴ�. �迭 ���� �� �����ͷ� �޴´�.
	//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
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