#include <stdio.h>
#include <stdlib.h>

int main(){

	int num, input = 0, count = 0;
	int min = 0, max = 50;

	srand(time(NULL));

	num = rand() % 50;
	
	printf("find number between 0 and 50\n");
	printf("There are 10 times to try\n");
	

	printf("Enter number between %d and %d >", min, max);

	scanf("%d", &input);

	while(count != 9){
		count++;
		if(input < num){
			printf("You entered the smaller number\n");
			min = input;	
			printf("Enter number between %d and %d >", min, max);
		}else if(input > num){
			printf("You entered the bigger number\n");
			max = input;	
			printf("Enter number between %d and %d >", min, max);
		}else{
				printf("Correct Answer! (tiral time = %d)\n ", count);
				break;
		}
		scanf("%d", &input);
	}
}
