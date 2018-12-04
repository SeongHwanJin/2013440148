#include <stdio.h>
#include <stdlib.h>

typedef struct complex { //complex도 없어도 됨
	double real;
	double imag;
} Complex;

void printComplex(Complex* ptr) { //대부분의 경우 구조체 포인터를 매개변수로 전달 받는다. #23
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

Complex* addComplex(Complex* ptr1, Complex* ptr2){ //#48
	Complex* tempPtr; //#49
	tempPtr = (Complex*) malloc(sizeof(Complex));//동적 할당 #50
	tempPtr->real = ptr1->real + ptr2->real; tempPtr-> imag = ptr1->imag + ptr2->imag; //#51
	return tempPtr; //#52
}

int main(){
	//구조체 변수 선언
	Complex a,b; //이렇게 쓰기 귀찮. #30, #47
	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr; //#36 
	a.real = 10;//구조체변수의 멤버변수 접근방법 ==> 구조체변수.멤버변수이름 #51
	a.imag = 20;//#52
	b.real = 10;
	b.imag = 30;
	ptr = addComplex(&a, &b); //#54
	printComplex(ptr);
}