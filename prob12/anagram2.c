#include <stdio.h>

int main(){
	int arr1[26] = {0,};
 	int arr2[26] = {0,};
	char sen1[50];
	char sen2[50];

	int i;
	int cas = 0;


	printf("Input the 1st sentence : ");
	scanf("%s",sen1);

	getchar();
	printf("Input the 2nd sentence : ");
	scanf("%s", sen2);

	for(i = 0; sen1[i]; i++){
		if((sen1[i] >= 'A') && (sen1[i] <= 'Z'))
				sen1[i] = sen1[i] + 32;
		arr1[sen1[i] - 'a']++;
	}	

	for(i = 0; sen2[i]; i++){
		if((sen2[i] >= 'A') && (sen2[i] <= 'Z'))
				sen2[i] = sen2[i] + 32;
		arr2[sen2[i]-'a']++;
	}
	for(i = 0; i < 26; i++){
		if(arr1[i] != arr2[i]){
				cas = 1;
				break;
		}
	}
	if(cas == 0){
		printf("Yes! They are anagrams!!\n");
	} else{
		printf("NO! They are not anagrams!!\n");
	}

}
