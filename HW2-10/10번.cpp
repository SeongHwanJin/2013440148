//10. �Ҽ�(prime-number) �˻�� ����ϰ� ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//8 => 2 4 
//12 => 2 3 4 6

#include <stdio.h>
int main(){
	int a;
	int i;
	printf("�μ��� ����� ���� �Է��ϼ��� : ");
	scanf("%d", &a);
	for( i = 1; i <= a; i++)
	{
		if(a%i == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}