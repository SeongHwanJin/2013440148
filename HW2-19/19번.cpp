//19. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���ڰ� �Ҽ����� �ƴ����� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main() {
	int num;
	int i;
	int a=1;

	printf("���ڸ� �Է��ϼ��� : \n");
	scanf("%d", &num);

	for(i = 1; i < num; i++){
		if(num % i == 0) 
			a = a + 1;
	}
	if(a == 2) 
		printf("�Է¹��� ���ڴ� �Ҽ��Դϴ�.\n");
	else  
		printf("�Է¹��� ���ڴ� �Ҽ��� �ƴմϴ�.\n");
	
	return 0;
}