#include <stdio.h>
#include <stdlib.h>

typedef struct complex { //complex�� ��� ��
	double real;
	double imag;
} Complex;

void printComplex(Complex* ptr) { //��κ��� ��� ����ü �����͸� �Ű������� ���� �޴´�. #23
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

Complex* addComplex(Complex* ptr1, Complex* ptr2){ //#48
	Complex* tempPtr; //#49
	tempPtr = (Complex*) malloc(sizeof(Complex));//���� �Ҵ� #50
	tempPtr->real = ptr1->real + ptr2->real; tempPtr-> imag = ptr1->imag + ptr2->imag; //#51
	return tempPtr; //#52
}

int main(){
	//����ü ���� ����
	Complex a,b; //�̷��� ���� ����. #30, #47
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr; //#36 
	a.real = 10;//����ü������ ������� ���ٹ�� ==> ����ü����.��������̸� #51
	a.imag = 20;//#52
	b.real = 10;
	b.imag = 30;
	ptr = addComplex(&a, &b); //#54
	printComplex(ptr);
}