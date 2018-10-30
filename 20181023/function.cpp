/* Today's topic : 함수(Function)
 "요약화" Abstraction -> 추상화 : 사물의 여러 성질 중 특정 목적을 위해 핵심적인 성질만 간추려 내는(요약) 것을 말한다.
  1. 목적이 있어야 한다. 
  2. 요약 - 1. 절차적 요약화 2. 선언적 요약화 (잘 기억해두라)

  */

/* 함수 sum() : sum은 변수의 이름이 아니고 함수의 이름이기 때문이다.
   입력 : 두 정수
   출력 : 두 정수의 합
   부수효과 : 없음
*/
/*상태도: 변수를 위한 메모리 공간이 언제, 어떻게 사용되는 지 표시한다.(노트)
*/
 
#include <stdio.h> 
//함수정의 int sum(int a, intb) 이 부분임.
int gVar = 100; //integer global variable -> file 전체에서 gVar를 접근할 수 있다. 전역변수(global variable)
                //지역변수(local variable)
                //하지만 쓰지마라. 다른사람들이 쓸 수 있어서 배움. 이거 쓰면 이해하기가 어렵다.
//함수1.
int sum(int a, int b){ //함수선언  1. sum은 변수의 이름이 아니고 함수의 이름이다(sum). 2. 매개변수의 갯수(2개) : 여기서는 2개
	                   //          3. 각 매개변수의 자료형(int, int)                   4. 반환 값의 자료형(반환형) : int 반환
					   //이 모든 것들은 함수를 호출하기 위해 필요한 정보이다.(위의 4가지가)


	static int c;			//함수본체(위의 중괄호도 포함) 변수 a,b,c가 유효한 곳은 함수 내부.
	c = a + b; a = 100;     //모든 변수는 변수 이름이 유효한(코드상에서) 범위가 있다. 함수안에서만 유효한 것. a+b+x 쓰면 error난다.
	return c;      //변수의 유효범위(scope)가 전체인 함수를 만들 수 있다.
}

//함수2. 함수: goodPrint()
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint() {
	printf("good\n");
} //return값이 없다.


//이 함수에서 a,b,c는 automatic, 자동 변수는 함수가 시작되면 생성되어 함수가 종료되면 소멸된다. 
//static int c; 선언하면 함수가 종료해도 끝까지 변수가 살아남아있다.
//int a, b, c가 언제 생성되고, 언제 소멸되는지(변수의 존재기간: 프로그램 실행 중 변수를 위한 메모리 영역이 생성되는 순간부터 소멸되는 순간까지의 기간)
//앞으로 sum이 나오면 변수의 이름이 아니고 함수의 이름이 된다.
int main(){

	int  x = 10, y = 20, z;
	z = sum(x,y); //함수 호출 , 위의 정보에서 반환 값의 자료형은 int인 것을 알 수 있다.
	              //매개변수 mechanism을 이제부터 상태도로 그릴 것.
	
	printf("z = %d\n", z);
	goodPrint();
	return 0;
}
/* 매개변수의 전달: 함수호출시(노트참고) - 과정
1. 매개변수를 복사하기 위해 메모리 영역이 새로 생성된다.
2. 매개변수의 값이 새로 생성된 메모리 영역으로 복사된다.
3. 함수 내에서는 새로 생성된 메모리영역을 접근한다.
4. 함수가 종료되면 생성된 메모리 영역이 소멸된다.
*/
//디버거 : 프로그램을 한줄한줄 단위로 실행시킬 수 있다. 
//각 step마다 변수가 어떻게 변하는 지 다 볼 수 있다.


/*
Review : 함수
노트
