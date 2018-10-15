//1. 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
	int a, b;
	printf("두 수를 입력하시오 : ");
	scanf("%d""%d", &a,&b);

	if (a < b)
		printf("큰 수는 %d이다.", b);
	else
		printf("큰 수는 %d이다.", a);

}
