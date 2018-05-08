#include <stdio.h>

int main(){
	int i, j;
	int num;
	int sum = 0;

	int score_num;
	int score[20];

	printf("Enter the time you will play : ");
	scanf("%d", &num);

	for(i = 0; i < num; i++){
		printf("Enter the time you made the score : ");
		getchar();
		scanf("%d", &score_num);
		
		printf("Enter the score : ");
		sum = 0;

		for(j = 0; j < score_num; j++){
			getchar();
			scanf("%d", &score[j]);
			sum += score[j];
		}
		for(j = 0; j < score_num-3; j++){
			if(score[j] == 10){
				sum =  sum + score[j+1] + score[j+2];
			} else if( score[j]+score[j+1] == 10){
				sum =  sum + score[j+2];
				j++;
			}
		}
//		if(score[score_num - 3] == 10 || score[score_num - 3] + score[score_num -2] == 10){
//			sum = sum + score[score_num -1];
//		}


	printf("score : %d", sum);
	}

}
