#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	int i = 0;
	char s1[100];
	printf("Enter String : ");
	scanf("%s", s1);

	for(i = 0; i < strlen(s1); i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z')
			printf("%c", s1[i]+32);
		else if( s1[i] >= 'a' && s1[i] <= 'z')
				printf("%c", s1[i]-32);
	}
	printf("\n");
}
