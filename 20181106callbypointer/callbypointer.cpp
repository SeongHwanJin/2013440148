//포인터를 매개변수로 전달!!
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
	a = 100; //3
} //4
void testPointer(int* ptr) {
	*ptr = 100; //6
}

int main(){
 int a = 10; //6
 test(a); //7
 printf("a = %d\n", *&a); //8

 //포인터를 매개변수 값으로 전달
 testPointer(&a); //15
 printf("a = %d\n", a);

 return 0;
}