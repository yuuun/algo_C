#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int count = 0;
	int cnt = 0;
	int i;
	char str[88];
	scanf("%s", str);

	for(i = 0; i < strlen(str); i++){
		if(str[i] == '(')						count++;
		else if(str[i] == ')')			count--;

		if(count < 0){
			cnt = 1;			break;
		}
	}
	if(count != 0 || cnt == 1){
		printf("NO\n");
	}
	else if(cnt == 0&& count == 0){
		printf("YES\n");
	}
}
