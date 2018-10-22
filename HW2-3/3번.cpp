//3. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(while문 사용)

#include <stdio.h>
int main(){
	int a = 1;
	int sum = 0;
	while(a < 100){
		if(a % 3 == 0){
			sum = sum + a;
			a = a + 1;
		}
		else a = a+1;
	}
	printf("1부터 100사이의 숫자 중에서 3의 공배수들의 총합은 %d이다.", sum);
	return 0;
		}