#include <stdio.h>

int main(){
	int i, j;
	char myTime[6][5];
	char FriTime[6][5];

	FILE * myfp = fopen("MyTime.txt", "r");
	FILE * frifp = fopen("Friend.txt", "r");
	
	//Error
	if(myfp == NULL || frifp == NULL){
		printf("ERROR!!!!");
		return -1;
	}
	
	for(i = 0; i < 6; i++){
			fscanf(myfp, "%s %s %s %s %s", &myTime[i][0], &myTime[i][1], &myTime[i][2], &myTime[i][3], &myTime[i][4]);
	}
	

	for(i = 0; i < 6; i++){
			fscanf(frifp, "%s %s %s %s %s", &FriTime[i][0], &FriTime[i][1], &FriTime[i][2], &FriTime[i][3], &FriTime[i][4]);
	}
	

	//printf
	for(j = 0; j < 5; j++){
		for(i = 0; i < 6; i++){
			if(myTime[i][j] == '-' && FriTime[i][j] == '-'){
				switch(j){
						case 0 : printf("Monday "); break;
						case 1 : printf("Tuesday "); break;
						case 2 : printf("Wendsday "); break;
						case 3 : printf("Thrusday "); break;
						case 4 : printf("Friday "); break;
				}
				printf("%dclass\n", i+1);
			}
		}
	}
}

