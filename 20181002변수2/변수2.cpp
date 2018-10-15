#include <stdio.h>
int main() {
// =========이 위는 당분간 무시
	//변수 선언문 (자료형 변수이름;): 1. 변수의 이름 소개 2. 변수의 자료형 지정
	//int => 자료형, a==> 변수이름
	//변수: 메모리 저장장소의 이름
	//자료형: 변수가 가질 수 있는 값의 범위를 지정
	//C언어에서는 변수를 사용하기 전에 반드시 변수선언을 해야한다.
    //문장: ;으로 끝난다.
	int a; // 저장장소 8byte를 사용한다. int -> -2^16 <= a <= 2^16-1, 정수 값만 가짐
	float ff; //소수점 숫자(실수) 표현
	//a에 4bit를 부여해서 32bit를 부여한다.
	//Editor 내에서 C언어를 이해해서 int, a 색깔이 다른것임. 
	//파란색으로 나온 것은 전부 예약된 단어이다. Mary is a girl. 
	//a라는 것은 고유명산데, 변수의 이름이라는 것을 알려준다. Mary같이. 
	//int같은 자료형을 Reserved word라고도 한다.
	//대입문: 우변의 "값"을 좌변의 저장장소로 이동(저장)한다.
	//리터럴(literal): 소스코드에서 특정한 자료형의 값을 직접 표현하는 방법. 
	//예) 정수형: 10, 0xF3; 실수형: 3.14, 10f; 0.1E-5; 문자형: 'a', \n; 문자열: "Hello world"
	// a=10=0xa(16진수로 표현한 것); =은 같다X 대입연산자임.

	a = 10; //변수선언문: 1. a는 변수의 이름이다. 2. 변수 a의 자료형은 int이다.
	        //우변의 값을 좌변으로 이동시킨 것이다.
	int b = 20, c; //변수선언 + 변수 초기화, 여러 개 쓰고 싶으면 그냥 콤마쓰면 됨. 대입안해주면 이상한 값 들어가있음.

	//수식(expression): 변수와 자료형은 메모리접근과 관련됨. but 수식은 연산과 관련된다. 연산자와 피연산자들의 조합. 
    //"모든 수식은 값을 반환(리턴)한다."-반드시 외워라.
	c = a + b; //a,b : 피연산자(operand), +:연산자(operator) %:나머지 연산자(modulo) c: 반환된 값을 저장한 것.
	//=:대입 연산자
	a = b = c = 100;
	//대입연산자는 오른쪽에서부터 왼쪽으로 수행된다. (똑같은게 계속 나왔을 때) c=100;부터 수행됨. 우변의 값을 반환. 저장의 2가지 일을 수행함.
	//b=100; -> a=100; 모든 수식은 값을 반환하고 부수효과가 있을 수도 있다. 
	//a = 10+20*3 ; 괄호가 없이 수식이 나열이 된다면 연산사이에는 순서가 존재한다.

	//증감연산자
	a = b++; //b++: 반환값==>b, 부수효과==> b=b+1, a=b=100이 되고, b는 101이 된다. 반환 값과 부수효과 모두 존재하는 예시.
	b = 10;
	a = ++b; //++b: 반환값==>b+1, 부수효과==> b=b+1 , a=11이 return된다. 거기에 부수효과로 b도 11이 된다.

	//관계연산자: <  >   <=  >=  ==  != (참이면 1 return, 거짓이면 0 return)
	a = 10; b = 20; 
	c = a < b; // 연산결과 참 c->1
	c = a > b; // 연산결과 거짓 c->0

	//논리연산자 : &&(and)  ||(or)  !(not)
	//C언어에서 논리연산자의 피연산자가 0이면 거짓.
	//0이 아니면 참으로 처리한다.
	a = 1 && 0; // a-> 0
	a = 1 || 0; // a-> 1;
	a = 100 || 0; //a? 100은 0이 아니라서 참으로 처리한다(1이 된다.)
	              //a->1;

	//연산자 우선순위(operator precedence)
	a = 10 + 20 * 3; //연산자 3개 중에 
	a = (1 || ((3 * 4) > 10)); //홈페이지 참고. 1. 산술 연산자 2. 관계연산자 3. 논리 연산자 4. 대입연산자 : a->1


	//연산자 결합방향(Associativity)
	a = 10 + 20 + 30; //대부분은 왼쪽에서 오른쪽이지만 대입연산자나 단항연산자는 오른쪽에서 왼쪽으로 처리된다.

	//조건문(Conditional Statement)
	a=10;
	//조건문 시작
	if(a == 10) {
		printf("a is ten\n");
		printf("Ronaldo is the best\n");
	} //중괄호 쓰는 이유: 중괄호 안을 한문장으로 처리한다. 여러개의 문장을 한문장으로 처리하기 때문에 복합문이라고도 한다.
	else {
		printf("a is not ten\n");
	}
    //조건문 끝


	/*//조건문 2
	if( a==10) {
		printf("a is ten\n");
		printf("Ronaldo is the best\n");
	} //중괄호 쓰는 이유: 중괄호 안을 한문장으로 처리한다. 여러개의 문장을 한문장으로 처리하기 때문에 복합문이라고도 한다.
	else if(a==20)
		printf("a is twenty\n");
	else //else 없어도 괜찮다.
		printf("a is not ten\n");


	//printf( "a = %d\n", a); //콤마 왼쪽은 화면에 print하라 %d는 오른쪽에 있는 변수를 %d 자리에 10진수로 써라. d는 decimal의 약자임.
	                        //%x쓰면 16진수가 print된다. 
	*/

	//키보드에서 입력받는 방법
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	
	printf("입력받은 a = %d\n", a);

	printf("program end!!!!!!!!!!!!!\n");
// =========이 아래도 당분간 무시
	return 0;
}