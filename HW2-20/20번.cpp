//20. 100 이하의 소수를 모두 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(){
	int i; //기준 비교숫자
	int k = 1; //1씩 올려가면서 나머지 0되는 수 찾기
	int a = 0; //약수의 개수
    int b; // 0이면 약수

	for(i = 2; i <= 100; i++){
		a = 0;
		for(k = 1; k <= i; k++){
		b = i % k;
		if(b == 0) a++;
	}
		if(a == 2) printf("%d\n", i);
	}
	return 0;
}