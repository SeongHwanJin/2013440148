/*5. �޴��� ����ϰ�, ����ڷκ��� �Է��� �޾� ���õ� �޴��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (����� �Է�)orange

--------------
Your choice is ��orange��.*/
#include <stdio.h>
int main()
{
	char menu[100]; //menu

	printf("choose one of the following.\napple \norange \nbanana \npeach\n");
	
	printf("enter your choice here : ");
    scanf("%s", menu); //menu �Է�

	printf("Your choice is \"%s\".", menu); //�Է��� menu�� ����Ѵ�.
	return 0;
}