#include <stdio.h>
//printArray()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
//void printArray(int arr[], int len){ //�迭�� �Լ����ٰ� �������� �迭�� �迭�� ���� �ʿ�
void printArray(int* arr, int len){ //������ �Ʒ��� �� �� ��밡���ϴ�. �迭 ���� �� �����ͷ� �޴´�.
	//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

int main() {
	int a[3] = {10, 20, 30}; //�迭�� ����: �迭�̸�: a, �迭����: 3 //13
	int* ptr; //14
	//�迭�� �̸��� ����ϸ� �� �迭 ù ����� �����Ͱ��� �ȴ�.
	printArray(a, 3);
	



	//a = ptr; //error WHY? �迭�� �̸��� ���� ������ �ִ�.�� rvalue�̴�.
	//10 = a[2];



	//printArray(a, 3);

	return 0;
}