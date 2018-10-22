/*23.***** *
     *** ***
     * *****
를 출력하시오(반복문 써서!)
*/
#include <stdio.h>
int main(){
	int x, y;
	for(x = 0; x < 3; x++)
	{
		for(y = 0; y <= 5; y++){
			printf("*");
			if((x == 0) && (y == 4)) printf(" ");
			else if((x == 1) && (y == 2)) printf(" ");
			else if((x == 2) && (y == 0)) printf(" ");
		}
		printf("\n");
	}
	return 0;
}