//3. �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d""%d""%d", &a,&b,&c);
	
	if ( a > b )
		d = a;
	else if ( a < b )
		d = b;
	
	if ( c > d )
		d = c;
	else if ( c < d )
		d = d;
	
	printf("�� �� �� ���� ū ���� %d�̴�.", d);

}