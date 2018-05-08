#include <stdio.h>
#define ADD 1
#define MIN 1
int main(){
	int num1, num2;
	printf(" Enter 2 Integer :");
	scanf("%d %d", &num1, &num2);

#if ADD
		printf("++!!!");
#endif

#if MIN 
		printf("--!!");
#endif

}
