//10. 소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
//8 => 2 4 
//12 => 2 3 4 6

#include <stdio.h>
int main(){
	int a;
	int i;
	printf("인수를 출력할 수를 입력하세요 : ");
	scanf("%d", &a);
	for( i = 1; i <= a; i++)
	{
		if(a%i == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}