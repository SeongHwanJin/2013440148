/* 16. 한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.
사용자 입력 : 한 개의 정수 
출력 : 자릿수의 개수
*/

#include <stdio.h>
int main() {
	int num;
	int a=0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	
	while(num>0) {
		num = num/10;
		a++;
	}
	printf("자리수는 %d이다.", a);
}
	