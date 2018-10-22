//14. 사용자로부터 숫자 하나를 입력받아, 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오. 
//입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.

#include <stdio.h>
int main(){
	int num;
	int i = 7;
	int sum = 0;
	
	while(1) {
	printf("7보다 큰 정수 하나를 입력해주세요 : ");
	scanf("%d", &num);
		if( num < 7 )
			printf("입력받은 숫자가 7보다 작습니다. 다시 입력해주세요.\n");
		else break;
	}
			for(i = 7; i <= num ; i++) {
				sum = sum + i;
			}
			printf("7부터 입력받은 수 까지의 모든 정수들의 합은 %d입니다", sum);
			return 0;
}
				
