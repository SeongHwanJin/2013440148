//12. for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main(){
	int a;
	int out=0;

	while(1) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &a);
		if( a > out )
			out = a;
		else
			out = out;
		if(a == 0)
			break;
	}
	printf("�Է� ���� ���� �� ���� ū ���� %d�Դϴ�.", out);
	return 0;
}
		