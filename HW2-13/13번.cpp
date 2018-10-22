//13. month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오. (switch문 사용)
//1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.

#include <stdio.h>
int main(){
	int month, day; //입력할 month와 day.
	int monthday1, monthday2, monthday3, monthday4; //한 달에 며칠씩 있는지 설정해줬습니다.
	int monthday5, monthday6, monthday7, monthday8;
	int monthday9, monthday10, monthday11;
	printf("month를 입력하세요 : "); //입력해서 저장.
	scanf("%d", &month);
	printf("day를 입력하세요 : ");
	scanf("%d", &day);

	switch(month) //입력한 month case로 이동합니다. 
	{ //각 case마다 break를 빼주고 case를 역순으로 배열해서
	  //12월이 선택되면 11월~1월 case까지 역순으로 진행해나가게 설정했습니다.
      //12월을 제외한 나머지 month에서, ex) 11월인데 case11에 있는 경우는 
	  //일수를 그대로, 11월이 아닌경우는 12월에서 내려온 경우 밖에 없으므로
	  //11월의 총 일 수를 더해 day=day+11월의 일수로 설정해주고 break문이 없으므로
	  //밑의 case로 이동해나가 1월까지 진행하게 코딩해봤습니다.
	case 12:day = day;
	case 11:monthday11 = 30; 
		if(month==11) day = day; //11월로 설정되면 11월 총 일 수를 더할 필요가 없습니다.
		else day = 30 + day;     //12월이라면, 11월의 총 수를 더해줍니다.
	case 10:monthday10 = 31;     //위의 과정을 반복하여 내려갑니다.
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
	printf("총 day수는 %d입니다\n", day); //switch문에서 더해져 내려온 총 day수를 출력.
	return 0;
}
