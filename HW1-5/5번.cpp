/*5. 메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (사용자 입력)orange

--------------
Your choice is “orange”.*/
#include <stdio.h>
int main()
{
	char menu[100]; //menu

	printf("choose one of the following.\napple \norange \nbanana \npeach\n");
	
	printf("enter your choice here : ");
    scanf("%s", menu); //menu 입력

	printf("Your choice is \"%s\".", menu); //입력한 menu를 출력한다.
	return 0;
}