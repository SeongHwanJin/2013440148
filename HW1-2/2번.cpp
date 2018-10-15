//2. 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
 int a;
 printf("입력받은 수가 짝수인지 홀수인지 판별해주겠습니다 \n정수를 입력하시오 : ");
 scanf("%d", &a);
  
 if (a % 2 == 1)
	 printf("입력 받은 수는 홀수입니다.");
 else
	 printf("입력 받은 수는 짝수입니다.");

}