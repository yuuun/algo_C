#include <stdio.h>

void transNum(int num);
int main(){

	int num, tNum;
	printf("Enter Number: ");
	scanf("%d", &num);


	if(num >= 9999 || num < 0)
		printf("Out of Range!");
	
	if(num == 0)
		printf("zero");

	tNum = num;

	if(num >= 1000){
		tNum = num/  1000;
		transNum(tNum);
		printf("thousand ");
		tNum = num - tNum * 1000;
	}
	
	if(tNum >= 100){
		tNum = tNum / 100;
		transNum(tNum);
		printf("hundred ");
		tNum = num - tNum *100 - num/1000*1000;
	}
	
	if(tNum >= 10 && tNum <= 19){
		switch(tNum){
			case 10 : printf("ten");	break;
			case 11 : printf("eleven"); break;
			case 12 : printf("tweleve");	break;
			case 13 : printf("thirteen");	break;
			case 14 : printf("fourteen");	break;
			case 15 : printf("fifteen");	break;
			case 16 : printf("sixteen");	break;
			case 17 : printf("seventeen");	break;
			case 18 : printf("eighteen");	break;
			case 19 : printf("nineteen");	break;
		}
		printf("\n");
		return 0;
	}
	if(tNum >= 20){
		tNum = tNum /10;
		switch(tNum){
			case 2 : printf("twenty");	break;
			case 3 : printf("thirty"); break;
			case 4 : printf("fourty"); break;
			case 5 : printf("fifty");	break;
			case 6 : printf("sixty");	break;
			case 7 : printf("seventy");	break;
			case 8 : printf("eighty");	break;
			case 9 : printf("ninety");	break;
		}
		printf(" ");
		tNum = num - tNum*10 - num/100*100;
	}
	transNum(tNum);
	printf("\n");
}

void transNum(int num){

	switch(num){
			case 1 : printf("one");		break;
			case 2 : printf("two"); 	break;
			case 3 : printf("three");	 break;
			case 4 : printf("four");	break;
			case 5 : printf("five");	break;
			case 6 : printf("six");		break;
			case 7 : printf("seven");	break;
			case 8 : printf("eight");	break;
			case 9 : printf("nine");	break;
			default : break;
	}
	printf(" ");
}
