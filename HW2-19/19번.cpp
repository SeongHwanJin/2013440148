//19. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
	int num;
	int i;
	int a=1;

	printf("숫자를 입력하세요 : \n");
	scanf("%d", &num);

	for(i = 1; i < num; i++){
		if(num % i == 0) 
			a = a + 1;
	}
	if(a == 2) 
		printf("입력받은 숫자는 소수입니다.\n");
	else  
		printf("입력받은 숫자는 소수가 아닙니다.\n");
	
	return 0;
}