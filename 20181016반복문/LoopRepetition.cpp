/*Today's topic
1. �ݺ���(loop Repetition)
ctrl - ] : matching ��ȣ.
ctrl - k, ctrl - f : Format
*/
/*
ctrl-k, ctrl-f:Format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
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
//		printf("count = %d\n", count);			printf("count = %d\n", count++); �ؿ� count�� ��������
//		count = count + 1; , 	count++;, 
//	}
//
//	printf("\n���α׷� ����!!!!!!!\n");  
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
//	printf("\n���α׷� ����!!!!!!!\n");
//
//	return 0;
//}

//1�������� 100���� 3�� ����� ȭ�鿡 ���
//#include <stdio.h>
// int main() {
//	int count = 1;
//	while(count<=100){
//		if( count % 3 ==0 ) //3�� ����϶� ���ǹ� ����.
//			printf("count= %d\n",count);
//		count++;
//		return 0;
//	}
// }
 //1�������� 100���� 3�� ����� ������ ������ ȭ�鿡 ���.
 //#include <stdio.h>
 //int main() {
	//int count = 1;
	//while(count<=100){
	//	if( count % 3 != 0 ) //3�� ����϶� ���ǹ� ����.
	//		printf("count= %d\n",count);
	//	count++;
	//	
	//}
 //}
 
// Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
// ���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� ������.(Break����)

//#include <stdio.h>
//int main() {
//	int input;
//	while(1) {
//		printf("������ �Է��ϼ���: ");
//		scanf("%d", &input);
//		if(input == 100)
//			break;
//		if(input >= 1000) {
//			printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է����ּ���.\n");
//			continue;
//		}
//		if(input % 3 == 0)
//			printf("�Է��� ���� %d�� 3�� ����Դϴ�.\n",input);
//		else 
//			printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n",input);
//	
//
//	}
//}

// 1���� 100������ ������ ���� ���Ͻÿ�.
//#include <stdio.h>
//int main(){
//	int sum=0; int i=1;
//	while(i<=100) {
//		//sum = sum + i;
//		//i++;
//		//sum = sum + i++;
//		sum += i++; //sum = sum + i�ΰ���. + i++ : �����Ƽ� ����
//	}
//	printf("the sum is %d\n",sum);
//
//}

#include <stdio.h>
int gcd(int a, int b)){
	
}




