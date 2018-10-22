//12. for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main(){
	int a;
	int out=0;

	while(1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &a);
		if( a > out )
			out = a;
		else
			out = out;
		if(a == 0)
			break;
	}
	printf("입력 받은 정수 중 가장 큰 수는 %d입니다.", out);
	return 0;
}
		