#include <stdio.h>
#include<string.h> //strlen이라는 함수 쓰려고 넣음.
void printArray(char* arr, int len){ //위에꺼 아래꺼 둘 다 사용가능하다. 배열 받을 때 포인터로 받는다.
	//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index = 0; index < len; index++){
		printf("array[%d] = %c \n", index, arr[index]);
	}
}

int main(){
	//int a;
	char c; //1byte, 문자의 의미로 더 많이 활용한다. ASCII코드 표
	        //character(문자)형
	c = 'A'; //==> c=65; 'A'는 'A'의 ASCII 코드 값 65가 저장된다. 작은따옴표씀
	printf("c=%d\n", c); //%d는 decimal로 표시하라는 표시임.
	printf("c=%c\n", c); //%c는 character로 표시하라는 표시이다. %~:화면에 어떻게 표시될건지 결정함.
	
	char a[] = {'h','e','l','l','o'};
	printArray(a,5);


	//문자열(STRING)
	char b[] = "hello"; //==> 큰 따옴표 씀, char b[] = {'h','e','l','l','o', \0};
	printf("%s \n", b); //함수안에다가 배열 넣는데 길이 안집어 넣는다. 배열의 맨 마지막이 nul이라는 것을 함수가 알고있으니까. %s : 문자열(string) 출력
	printf("the length of the string is %d \n", strlen(b)); //strlen:글자수 return

	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str1);
	return 0;
}
//배열을 함수 매개변수로 갖다 넣을 때 자꾸 배열 길이 넣으니까 귀찮. 문자열 끝에 nul(0) 삽입.
//strcat : 두 문자열을 합친다.