#include <stdio.h>
#include<string.h> //strlen�̶�� �Լ� ������ ����.
void printArray(char* arr, int len){ //������ �Ʒ��� �� �� ��밡���ϴ�. �迭 ���� �� �����ͷ� �޴´�.
	//������ �迭�� �Լ��� ������ ��� �� ������ �ַ� ����Ѵ�.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %c \n", index, arr[index]);
	}
}

int main(){
	//int a;
	char c; //1byte, ������ �ǹ̷� �� ���� Ȱ���Ѵ�. ASCII�ڵ� ǥ
	        //character(����)��
	c = 'A'; //==> c=65; 'A'�� 'A'�� ASCII �ڵ� �� 65�� ����ȴ�. ��������ǥ��
	printf("c=%d\n", c); //%d�� decimal�� ǥ���϶�� ǥ����.
	printf("c=%c\n", c); //%c�� character�� ǥ���϶�� ǥ���̴�. %~:ȭ�鿡 ��� ǥ�õɰ��� ������.
	
	char a[] = {'h','e','l','l','o'};
	printArray(a,5);


	//���ڿ�(STRING)
	char b[] = "hello"; //==> ū ����ǥ ��, char b[] = {'h','e','l','l','o', \0};
	printf("%s \n", b); //�Լ��ȿ��ٰ� �迭 �ִµ� ���� ������ �ִ´�. �迭�� �� �������� nul�̶�� ���� �Լ��� �˰������ϱ�. %s : ���ڿ�(string) ���
	printf("the length of the string is %d \n", strlen(b)); //strlen:���ڼ� return

	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str1);
	return 0;
}
//�迭�� �Լ� �Ű������� ���� ���� �� �ڲ� �迭 ���� �����ϱ� ����. ���ڿ� ���� nul(0) ����.
//strcat : �� ���ڿ��� ��ģ��.