#include <stdio.h>

int main(){
	int c500 = 0, c100 = 0, c50 = 0, c10 = 0;
	int coin_input;
	int i;
	printf("Enter Change\n");

	scanf("%d", &coin_input);

	if(coin_input < 0){
		coin_input = -coin_input;
		printf("Will calculate in positive%dwon\n", coin_input);
	}
	while(coin_input >= 500){
		c500++;
		coin_input -= 500;
	}
	printf("500won coin : %d\n", c500);
	
	while(coin_input >= 100){
		c100++;
		coin_input -= 100;
	}
	printf("100won coin : %d\n", c100);
	
	while(coin_input >= 50){
		c50++;
		coin_input -= 50;
	}
	printf("50won coin : %d\n", c50);

	while(coin_input >= 10){
		c10++;
		coin_input -= 10;
	}
	printf("10won coin : %d\n", c10);
		
	return 0;
}
