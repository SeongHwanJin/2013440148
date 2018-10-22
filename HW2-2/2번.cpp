//2. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	printf("10개의 정수 입력: ");
	scanf("%d%d%d%d%d%d%d%d%d%d", &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
	
	printf("총합은 %d이다\n", a1+a2+a3+a4+a5+a6+a7+a8+a9+a10);
	return 0;
}