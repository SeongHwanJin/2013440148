/* 25.다음과 같은 출력이 나오도록 프로그램을 작성하시오.
(1) *********** (2)54321012345
********* 432101234
******* 3210123
***** 21012
*** 101
* 0
*** 101 
***** 21012 
******* 3210123 
********* 432101234 
*********** 54321012345
*/
#include <stdio.h>
int main(){
	int x, y, z;
	int num;
	for(x = 0; x <= 10; x++){
		if( x <= 5 ) {
		for(y = 0; y <= (10 - (2*x)); y++){
			printf("*");
		}
		printf(" ");
		for(z = 0; z <= (10 - (2*x)); z++){
			num = 5 - x - z;
			if( num < 0 )
				num = -num;
			printf("%d", num);

		}
		}
		
		else if( x >= 6 ){
	for(y = 0; y <= ( -10 + (2*x)); y++){
			printf("*");
		}
		printf(" ");
		for(z = 0; z <= (-10 + (2*x)); z++){
			num = x - 5 - z;
			if( num < 0 )
				num = -num;
			printf("%d", num);

		}
		}
		printf("\n");
	}
	return 0;
}