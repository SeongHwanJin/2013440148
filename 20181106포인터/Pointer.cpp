#include <stdio.h>

int main() {
	int a = 10; //1 : �������� + �����ʱ�ȭ
	int* ptr;   //2 : �����ͺ��� ����
	ptr = &a;   //3 : &a --> "Address of" a, ���� a�� �ּ�(���� a�� ���� �Ҵ��� �޸��� ù��° �ּ�)
	*ptr = 20;  //4 : *ptr --> "data of" ptr, �����ͺ��� ptr�� ����Ű�� ���� ������.
	printf("a = %d\n", a); //5

	return 0;
}
