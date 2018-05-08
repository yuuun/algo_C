#include <stdio.h>

int main(){
	int min, max;
	int i, j;

	printf("Enter 2 number between 1 and 300 : ");
	scanf("%d %d", &min, &max);

	for(i = min; i < max; i++){
		for(j = 2; j < i; j++){
			if(i%j == 0)
				break;					
		}
		if(j == i)
		printf("%d\n", i);
	}	

}
