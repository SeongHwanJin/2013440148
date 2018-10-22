//7. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

#include <stdio.h>
int main(){
	int n=1;
	int sum = 0;
	while( n != 0 ){
		printf("정수를 입력하세요 : \n");
		scanf("%d", &n);
		sum = sum + n;
	}
	printf("입력된 모든 숫자들의 총합은 %d이다.\n", sum);
	return 0;
}