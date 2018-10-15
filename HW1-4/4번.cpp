/*4. 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.
(A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0) */
#include <stdio.h>
 int main () {
	 int a;

	 printf(" 점수를 입력하시오(0점에서 100점사이에서) : " );
	 scanf("%d", &a);
	 
	 if (a >= 80 && a <=100)
		 printf(" A등급입니다. ");
	 else if (a <= 79 && a >= 60 )
		 printf(" B등급입니다. ");
	 else if (a <= 59 && a >= 40 )
		 printf(" C등급입니다. ");
	 else if (a <= 39 && a >= 20 )
		 printf(" D등급입니다. ");
	 else if (a <= 19 && a >= 0 )
		 printf(" E등급입니다. ");
	 
 }