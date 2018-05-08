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
		switch(sen1[i]){
				case 'a' : arr1[0]++; 		break;
				case 'b' : arr1[1]++;			break; 
				case 'c' : arr1[2]++;			break; 
				case 'd' : arr1[3]++;			break; 
				case 'e' : arr1[4]++;			break; 
				case 'f' : arr1[5]++;			break; 
				case 'g' : arr1[6]++;			break; 
				case 'h' : arr1[7]++;			break; 
				case 'i' : arr1[8]++;			break; 
				case 'j' : arr1[9]++;			break; 
				case 'k' : arr1[10]++;		break; 
				case 'l' : arr1[11]++;		break; 
				case 'm' : arr1[12]++;		break; 
				case 'n' : arr1[13]++;		break; 
				case 'o' : arr1[14]++;		break; 
				case 'p' : arr1[15]++;		break; 
				case 'q' : arr1[16]++;		break; 
				case 'r' : arr1[17]++;		break; 
				case 's' : arr1[18]++;		break; 
				case 't' : arr1[19]++;		break; 
				case 'u' : arr1[20]++;		break; 
				case 'v' : arr1[21]++;		break; 
				case 'w' : arr1[22]++;		break; 
				case 'x' : arr1[23]++;		break; 
				case 'y' : arr1[24]++;		break; 
				case 'z' : arr1[25]++;		break; 
		}
	}	

	for(i = 0; sen2[i]; i++){
		if((sen2[i] >= 'A') && (sen2[i] <= 'Z'))
				sen2[i] = sen2[i] + 32;
		switch(sen2[i]){
				case 'a' : arr2[0]++; 		break;
				case 'b' : arr2[1]++;			break; 
				case 'c' : arr2[2]++;			break; 
				case 'd' : arr2[3]++;			break; 
				case 'e' : arr2[4]++;			break; 
				case 'f' : arr2[5]++;			break; 
				case 'g' : arr2[6]++;			break; 
				case 'h' : arr2[7]++;			break; 
				case 'i' : arr2[8]++;			break; 
				case 'j' : arr2[9]++;			break; 
				case 'k' : arr2[10]++;		break; 
				case 'l' : arr2[11]++;		break; 
				case 'm' : arr2[12]++;		break; 
				case 'n' : arr2[13]++;		break; 
				case 'o' : arr2[14]++;		break; 
				case 'p' : arr2[15]++;		break; 
				case 'q' : arr2[16]++;		break; 
				case 'r' : arr2[17]++;		break; 
				case 's' : arr2[18]++;		break; 
				case 't' : arr2[19]++;		break; 
				case 'u' : arr2[20]++;		break; 
				case 'v' : arr2[21]++;		break; 
				case 'w' : arr2[22]++;		break; 
				case 'x' : arr2[23]++;		break; 
				case 'y' : arr2[24]++;		break; 
				case 'z' : arr2[25]++;		break; 
		}
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
