#include <stdio.h>
//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
/*struct complex{
	double real;//��� ����(member variable)
	double imag;// ��(ditto)
};//����ü ������ �ݵ�� �����ݷ����� ������ �Ѵ�.
*/
//typedef struct complex Complex;//�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.

//���� �� ������ �ѹ������� ���� �� �ִ�.
//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
typedef struct complex { //complex�� ��� ��
	double real;
	double imag;
} Complex;

//������ Ÿ���� ���� ����
typedef int myIntType;//�ڷ��� "int"�� "myIntType"��� �θ��ڴ�.

//�Լ� printComplex()
//�Է�: ���Ҽ�
//���: ����
//�μ�ȿ��: ����
/*void printComplex(Complex x) { //#23
	printf("%f + j%f\n", x.real, x.imag);
}
*/
void printComplex(Complex* ptr) { //��κ��� ��� ����ü �����͸� �Ű������� ���� �޴´�. #23
	printf("%f + j%f\n", ptr->real, ptr->imag);
}
//�Լ� conjugate()
//�Է�: ���Ҽ�(������)
//���: ����
//�μ�ȿ��: �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��.
void convertToConjugate(Complex* ptr){
	ptr->imag = -1 * ptr->imag;
}
//�Լ� returnConjugate()
//�Է�: ���Ҽ� ������
//���: ���Ҽ� ����
//�μ�ȿ��: ����
Complex* returnConjugate(Complex* ptr){ //#38
	Complex temp; //#39
	temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	return &temp; //#41
}
int main(){
	myIntType count = 10;//==> int count = 10;
	//����ü ���� ����
	Complex a,b; //�̷��� ���� ����. #30
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr; //#36 
	a.real = 10;//����ü������ ������� ���ٹ�� ==> ����ü����.��������̸�
	a.imag = 20;
	printComplex(&a);//#33
	ptr = returnConjugate(&a); //#51
	printComplex(ptr);
	//printf("%f + j%f\n", a.real, a.imag);

	
	ptr = &a;     //#37 ����ü ����
	ptr->real = 100;//����ü ������ ������. //����ü ������ ������ ������� ���ٹ�� ==> ����ü�����̸� -> ��������̸�
	ptr->imag = 200;//��κ��� �Լ��� �̷������� �����ϰ� ��
	//convertToConjugate(&a);  //#52
	

	return 0;
}

