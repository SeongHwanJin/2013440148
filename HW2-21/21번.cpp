//21. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.
#include <stdio.h>
int main(){
	int num;
	int k = 1;
	int a, b, i;
	int sum = 0;
	printf("한 숫자를 입력하시오 : ");
	scanf("%d", &num);
	for(i = 2; i <= num; i++){
		a = 0;
		for(k = 1; k <= i; k++){
			b = i % k;
			if(!b) a++;
		}
		if(a == 2) {
			sum = sum + i;
		}
	}
		printf("입력받은 숫자 이하의 소수들의 합은 %d입니다.\n", sum);
		return 0;
	}
