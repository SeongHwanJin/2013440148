#include <stdio.h>
/*void test (int a) { //2
	a = 100; //3
} //4


int main(){
 int a = 10; //6
 test(a);
 printf("a = %d\n", a); //8

 return 0;
}
*/
void test (int a) { //2
	a = 100;
}
void testPointer(int* ptr) {
	*ptr = 100;
}

int main(){
 int a = 10; //6
 test(a);
 printf("a = %d\n", *&a);

 //�����͸� �Ű����� ������ ����
 testPointer(&a); //15
 printf("a = %d\n", a);

 return 0;
}