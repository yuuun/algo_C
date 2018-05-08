#include <stdio.h>
int main(){	
	FILE *balfp = fopen("balance.txt", "r+");
	FILE *resfp = fopen("reserve.txt", "r+");

	int bal, res, i, cost;
	char usuable;
	if(balfp == NULL || resfp == NULL){
		printf("FILE NOT FOUND ERROR!");
		return -1;
	}

	fscanf(balfp, "%d", &bal);
	fscanf(resfp, "%d", &res);
	
	printf("... Current Balance : %dwon, Reserve : %dwon\n", bal, res);

	printf("Cost of the product  ");
	scanf("%d", &cost);

	printf("Wanna use Reserve?");
	printf("enter y/n  ");	
	scanf("%d", &i);
	
	scanf("%c", &usuable);
	if(usuable == 'n'){
		if(bal < cost){
			printf("NO MONEY, ENTER BALANCE AGAIN\n\n");
			scanf("%c", &usuable);
		} else{
			bal = bal - cost;
			res = res + cost * 0.05;
		
			printf("%dwon is reserved\n",(int)(cost *0.05));
		}
	}else if(usuable == 'y'){
		res = res - cost;
	}else {
		printf("enter y/n\n");
		scanf("%c", &usuable);
	}
	fseek(balfp, 0, SEEK_SET);
	fseek(resfp, 0, SEEK_SET);
	fprintf(balfp, "%d    ", bal);
	fprintf(resfp, "%d    ", res);
//	fwrite(&bal, sizeof(int), 1, balfp);
//	fwrite(&res, sizeof(int), 1, resfp);

	fclose(balfp);
	fclose(resfp);
	printf("... Current Balance : %dwon, Reserve : %dwon", bal, res);
}
