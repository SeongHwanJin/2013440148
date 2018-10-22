//8. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)

#include <stdio.h>
int main(){
	int n;
	int i=1;
	printf("1부터 9사이의 숫자 하나를 입력해주세요 : ");
	scanf("%d", &n);

	while( i <= 9 ){
		printf("%d\n", n * i);
		i = i + 1;
	}
	return 0;
}