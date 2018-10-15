//3. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("세 수를 입력하세요 : ");
	scanf("%d""%d""%d", &a,&b,&c);
	
	if ( a > b )
		d = a;
	else if ( a < b )
		d = b;
	
	if ( c > d )
		d = c;
	else if ( c < d )
		d = d;
	
	printf("세 수 중 가장 큰 수는 %d이다.", d);

}