#include <stdio.h>

int main(){
	int try_num;
	
	int i;

	int cnt = 0;

	char cont;
	while(1){
		printf("Insert number of head you're gonna choose < 5~100>\n");
		scanf("%d", &try_num);
	
		char fig [2 * try_num]; 
		printf("Insert two colors of each head <%d>\n", try_num);
		for(i = 1; i <= try_num; i++){
			printf("=> %d. :", i);
			getchar();
			scanf("%c %c", &fig[2*i-2], &fig[2*i-1]);
	
		}
		printf("This is YOUR BEADS you picked\n");
	
		for(i = 1; i <= try_num; i++){
			printf("[%c, %c] ", fig[2*i-2], fig[2*i-1]);
		}
		printf("\n\n");

		if(fig[0] != fig[2*try_num - 1]) cnt = 1;
		for(i = 1; i < try_num; i++){
			if(fig[2*i-1] != fig[2*i]){
				cnt = 1;
				break;
			}
		}
		if(cnt == 0){
			printf("It's Possible to make complete Bracelet as follows!!\n");
			
			for(i = 1; i <= try_num; i++){
				printf("[%c %c]", fig[2*i-2], fig[2*i-1]);
				if(i != try_num)	printf("-");
			}
			printf("\n");
		}else {
			printf("It's IMPOSSIBLE to make complete Bracelet!!\n");
		}
		getchar();

		printf("One More? ");
		scanf("%c", &cont);
		if(cont == 'n')
				break;
	}
}
