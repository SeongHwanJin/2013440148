//13. month�� day�� �Է� �޾�, 1�� 1�Ϻ����� �� day���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (switch�� ���)
//1�� 20���� 20�� ���, 2�� 5���� 36�� ���. �� 2���� 28�Ϸ� ���.

#include <stdio.h>
int main(){
	int month, day; //�Է��� month�� day.
	int monthday1, monthday2, monthday3, monthday4; //�� �޿� ��ĥ�� �ִ��� ����������ϴ�.
	int monthday5, monthday6, monthday7, monthday8;
	int monthday9, monthday10, monthday11;
	printf("month�� �Է��ϼ��� : "); //�Է��ؼ� ����.
	scanf("%d", &month);
	printf("day�� �Է��ϼ��� : ");
	scanf("%d", &day);

	switch(month) //�Է��� month case�� �̵��մϴ�. 
	{ //�� case���� break�� ���ְ� case�� �������� �迭�ؼ�
	  //12���� ���õǸ� 11��~1�� case���� �������� �����س����� �����߽��ϴ�.
      //12���� ������ ������ month����, ex) 11���ε� case11�� �ִ� ���� 
	  //�ϼ��� �״��, 11���� �ƴѰ��� 12������ ������ ��� �ۿ� �����Ƿ�
	  //11���� �� �� ���� ���� day=day+11���� �ϼ��� �������ְ� break���� �����Ƿ�
	  //���� case�� �̵��س��� 1������ �����ϰ� �ڵ��غý��ϴ�.
	case 12:day = day;
	case 11:monthday11 = 30; 
		if(month==11) day = day; //11���� �����Ǹ� 11�� �� �� ���� ���� �ʿ䰡 �����ϴ�.
		else day = 30 + day;     //12���̶��, 11���� �� ���� �����ݴϴ�.
	case 10:monthday10 = 31;     //���� ������ �ݺ��Ͽ� �������ϴ�.
		if(month==10) day = day;
		else day = 31 + day;
	case 9: monthday9 = 30; 
		if(month==9) day = day;
		else day = 30 + day;
	case 8: monthday8 = 31;
		if(month==8) day = day;
		else day = 31 + day;
	case 7: monthday7 = 31;
		if(month==7) day = day;
		else day = 31 + day;
	case 6: monthday6 = 30;
		if(month==6) day = day;
		else day = 30 + day;
	case 5: monthday5 = 31;
		if(month==5) day = day;
		else day = 31 + day;
	case 4: monthday4 = 30;
		if(month==4) day = day;
		else day = 30 + day;
	case 3: monthday3 = 31;
		if(month==3) day = day;
		else day = 31 + day;
	case 2: monthday2 = 28;
		if(month==2) day = day;
		else day = 28 + day;
	case 1: monthday1 = 31;
		if(month==1) day = day;
		else day = 31 + day;
		break;
	}
	printf("�� day���� %d�Դϴ�\n", day); //switch������ ������ ������ �� day���� ���.
	return 0;
}
