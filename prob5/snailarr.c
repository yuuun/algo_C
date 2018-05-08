#include <stdio.h>

int main(){
	int num;
	int i, j, k;

	int arr[50][50];
	int x = 0; 
	int y = -1;
	int turn = 1;
	int n = 1;	

	printf("Please enter any value for nXn array : ");
	scanf("%d", &num);


	k = num;

	while(k != 0){
		for(i = 0; i < k; i++){
			y = y + turn;
			arr[x][y] = n++;
		}
		k--;
		for(i = 0; i <k ; i++){
			x = x + turn;
			arr[x][y] = n++;
		}
		turn *= -1;
		
	}
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}
