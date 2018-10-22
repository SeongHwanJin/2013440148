//18. 1부터 100까지 5의 배수의 합을 for loop을 써서 구하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
	int i;
	int sum=0;

	for(i = 0; i <= 100; i++) {
		if(i % 5 == 0)
			sum = sum + i;
	}
	printf("1부터 100까지 5의 배수의 합은 %d이다.\n",sum);
	return 0;
}