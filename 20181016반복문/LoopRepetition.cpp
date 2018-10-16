/*Today's topic
1. 반복문(loop Repetition)
ctrl - ] : matching 괄호.
ctrl - k, ctrl - f : Format
*/
/*
ctrl-k, ctrl-f:Format, 소스코드 선택영역을 예쁘게 포맷한다.
ctrl-] : matching parenthesis
ctrl-k ctrl c : Comment out
ctrl-k, ctrl-u : undo comment out
ctrl
*/

//#include <stdio.h>
//int main() {
//
//	int count = 1;
//	while(count <= 10){
//
//		printf("count = %d\n", count);			printf("count = %d\n", count++); 밑에 count항 빼버리고
//		count = count + 1; , 	count++;, 
//	}
//
//	printf("\n프로그램 종료!!!!!!!\n");  
// 
//	return 0;
//#include <stdio.h>
//int main() {
//
//	int count = 1;
//	while(count <= 10){
//
//		printf("count = %d\n", count++);
//
//	}
//
//	printf("\n프로그램 종료!!!!!!!\n");
//
//	return 0;
//}

//1에서부터 100까지 3의 배수만 화면에 출력
//#include <stdio.h>
// int main() {
//	int count = 1;
//	while(count<=100){
//		if( count % 3 ==0 ) //3의 배수일때 조건문 수행.
//			printf("count= %d\n",count);
//		count++;
//		return 0;
//	}
// }
 //1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력.
 //#include <stdio.h>
 //int main() {
	//int count = 1;
	//while(count<=100){
	//	if( count % 3 != 0 ) //3의 배수일때 조건문 수행.
	//		printf("count= %d\n",count);
	//	count++;
	//	
	//}
 //}
 
// 키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
// 위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 끝난다.(Break예제)

//#include <stdio.h>
//int main() {
//	int input;
//	while(1) {
//		printf("정수를 입력하세요: ");
//		scanf("%d", &input);
//		if(input == 100)
//			break;
//		if(input >= 1000) {
//			printf("입력한 정수가 1000보다 큽니다. 다시 입력해주세요.\n");
//			continue;
//		}
//		if(input % 3 == 0)
//			printf("입력한 정수 %d는 3의 배수입니다.\n",input);
//		else 
//			printf("입력한 정수 %d는 3의 배수가 아닙니다.\n",input);
//	
//
//	}
//}

// 1에서 100까지의 정수의 합을 구하시오.
//#include <stdio.h>
//int main(){
//	int sum=0; int i=1;
//	while(i<=100) {
//		//sum = sum + i;
//		//i++;
//		//sum = sum + i++;
//		sum += i++; //sum = sum + i인가봄. + i++ : 귀찮아서 만듬
//	}
//	printf("the sum is %d\n",sum);
//
//}

#include <stdio.h>
int gcd(int a, int b)){
	
}




