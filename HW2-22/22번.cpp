//22. ����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(){
	int num1;
	int num2;
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &num1);
	while(1){
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &num2);
		if(num1 > num2) num1 = num1;
		else if(num1 < num2) num1 = num2;
		if(num2 == 0) break;
	}
	printf("�Է¹��� ���ڵ� �� �ִ� ���� %d�Դϴ�\n", num1);
	return 0;
}