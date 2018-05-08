#include <stdio.h>

int main(){
	int num, max, min, i;
	printf("Enter Num\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &num);
		if(i == 0 ){			max = num;			min = num;		}
		else if( max < num)
				max = num;
		else if( min > num)
				min = num;		
	}
	printf("Max Number : %d\n", max);
	printf("Min Number : %d\n", min);
}
