//7. 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

#include <stdio.h>
int main(){
	int n=1;
	int sum = 0;
	while( n != 0 ){
		printf("������ �Է��ϼ��� : \n");
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("�Էµ� ��� ���ڵ��� ������ %d�̴�.\n", sum);
	return 0;
}