#include <stdio.h>

int main(){
	int num;
	int i, j;		
	printf("enter number : ");
	scanf("%d",&num);
	while( num > 9 || num < 1){
		printf("enter number between 1~9: ");
		scanf("%d", &num);
	}
	for(i = 1; i <= 9 ; i++){
		for(j = 0; j <i* num; j++)
				printf("*");
		printf("\n");
	}
	return 0;	
}
