//1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�
#include <stdio.h>
//�Լ� printNumber()
//�Է�: �� ����
//���: ���� -> void����.
//�μ�ȿ��: ����
void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d\n", count++);
}
int main() {
	int a= 3, b = 50;
	//printNumber(a,b);
	printNumber(-20,100);


	printf("End of Programm");
	return 0;
}

/*
�Լ� �Ű������� ���� 2��
*/