/* 24.����ڿ��� ���� ���� �Է¹޾Ƽ� �� �� �� ��ŭ ��ǥ �ﰢ���� ����ÿ�.
����� �Է�: 4
*
***
*****
*******
*/

#include <stdio.h>
int main(){
	int line;
	int x, y;
	printf("����� �Է� : ");
	scanf("%d", &line);
	for(x = 1; x <= line; x++){
		for(y = 1; y <= ((2 * x) - 1); y++)
			printf("*");
		printf("\n");
	}
	return 0;
}
			