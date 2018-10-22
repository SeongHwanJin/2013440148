/* 24.사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.
사용자 입력: 4
*
***
*****
*******
*/

#include <stdio.h>
int main(){
	int line;
	int x, y;
	printf("사용자 입력 : ");
	scanf("%d", &line);
	for(x = 1; x <= line; x++){
		for(y = 1; y <= ((2 * x) - 1); y++)
			printf("*");
		printf("\n");
	}
	return 0;
}
			