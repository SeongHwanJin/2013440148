#include <stdio.h>
#include <stdlib.h>
//구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
/*struct complex{
	double real;//멤버 변수(member variable)
	double imag;// 상동(ditto)
};//구조체 선언은 반드시 세미콜론으로 끝내야 한다.
*/
//리눅스에서는 요딴식으로 되어있음.
//typedef struct complex Complex;//자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.

//위의 두 문장을 한문장으로 만들 수 있다.
//구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
typedef struct complex { //complex도 없어도 됨
	double real;
	double imag;
} Complex;

//데이터 타입의 별명 선언
typedef int myIntType;//자료형 "int"를 "myIntType"라고도 부르겠다.

//함수 printComplex()
//입력: 복소수
//출력: 없음
//부수효과: 없음
/*void printComplex(Complex x) { //#23
	printf("%f + j%f\n", x.real, x.imag);
}
*/
void printComplex(Complex* ptr) { //대부분의 경우 구조체 포인터를 매개변수로 전달 받는다. #23
	printf("%f + j%f\n", ptr->real, ptr->imag);
}
//함수 convertToConjugate()
//입력: 복소수(포인터)
//출력: 없음 
//부수효과: 입력된 복소수가 켤레 복소수로 변환됨.
void convertToConjugate(Complex* ptr){
	ptr->imag = -1 * ptr->imag;
}
////함수 returnConjugate()
////입력: 복소수 포인터
////출력: 복소수 변수
////부수효과: 없음
//Complex* returnConjugate(Complex* ptr){ //#38
//	static Complex temp; //#39
//	temp.real = ptr->real; temp.imag = -1 * ptr->imag; //#40
//	return &temp; //#41
//}

//함수 returnConjugate()
//입력: 복소수 포인터
//출력: 복소수 변수
//부수효과: 없음
Complex* returnConjugate(Complex* ptr){ //#48
	Complex* tempPtr; //#49
	tempPtr = (Complex*) malloc(sizeof(Complex));//동적 할당 #50
	tempPtr->real = ptr->real; tempPtr-> imag = -1 * ptr->imag; //#51
	return tempPtr; //#52
}

int main(){
	myIntType count = 10;//==> int count = 10;
	//구조체 변수 선언
	Complex a,b; //이렇게 쓰기 귀찮. #30, #47
	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr; //#36 
	a.real = 10;//구조체변수의 멤버변수 접근방법 ==> 구조체변수.멤버변수이름 #51
	a.imag = 20;//#52
	printComplex(&a);//#33
	ptr = returnConjugate(&a); //#54
	printComplex(ptr);
	//printf("%f + j%f\n", a.real, a.imag);

	//free(ptr);printComplex(ptr); 다시 개판됨.
	ptr = &a;     //#37 구조체 변수
	ptr->real = 100;//구조체 포인터 변수임. //구조체 포인터 변수의 멤버변수 접근방법 ==> 구조체변수이름 -> 멤버변수이름
	ptr->imag = 200;//대부분의 함수를 이런식으로 구성하게 된다.
	convertToConjugate(&a);  //#52

	return 0;
}

