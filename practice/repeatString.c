#include <stdio.h>

int main(){
	int num;
	char arr[1000][20];
	
	int i, j, k;
	int cnt[1000];

	scanf("%d", &num);
	for(i = 0; i < num; i++){
			scanf("%d %s",&cnt[i], arr[i]);
	}
	for(i = 0; i < num; i++){
		for(j = 0; j < sizeof(arr[i])/sizeof(char); j++){
			for(k = 0; k < cnt[i]; k++){
				printf("%c", arr[i][j]);
			}
printf("%d",(int)sizeof(arr[0]));

		}
		printf("\n");
	}
	
}
