//17. 1���� 100������ ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
int main(){
	int i;
	int sum = 0;
	for(i = 0; i <= 100; i++){
		sum = sum + i;
	}
	printf("1���� 100������ ���� %d�̴�.\n", sum);
	return 0;
}