#include <stdio.h>

int main(){
	int n, k;
	int cnt;
	int i, j;
	int num, curNum;

	int idx;

	printf("Enter Integer n : ");
	scanf("%d", &n);

	getchar();
	printf("Enter Integer k : ");
	scanf("%d", &k);
	
	for(i = 0; i < (1 << n); i++){
		num = i; 
		curNum = i;
		cnt = 0;
		idx = 0;	

	int bin[10];
	for(j = 0; j <n ; j++){
			if((num & 1) == 1) cnt++;
			num = num >>1;
		}

		if(cnt == k){
			while(idx != n){
				bin[idx] = curNum %2;
				curNum /= 2;
				idx++;
			}
			idx--;
			
			for(j = idx; j >= 0; j--){
				printf("%d", bin[j]);
			}
			printf("\n");

		}
				
	}
	return 0;
		
		

}
