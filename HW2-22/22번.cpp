//22. 사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(){
	int num1;
	int num2;
		printf("숫자를 입력하세요 : ");
		scanf("%d", &num1);
	while(1){
		printf("숫자를 입력하세요 : ");
		scanf("%d", &num2);
		if(num1 > num2) num1 = num1;
		else if(num1 < num2) num1 = num2;
		if(num2 == 0) break;
	}
	printf("입력받은 숫자들 중 최대 값은 %d입니다\n", num1);
	return 0;
}