//21. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(){
	int num;
	int k = 1;
	int a, b, i;
	int sum = 0;
	printf("�� ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for(i = 2; i <= num; i++){
		a = 0;
		for(k = 1; k <= i; k++){
			b = i % k;
			if(!b) a++;
		}
		if(a == 2) {
			sum = sum + i;
		}
	}
		printf("�Է¹��� ���� ������ �Ҽ����� ���� %d�Դϴ�.\n", sum);
		return 0;
	}
