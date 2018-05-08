#include <stdio.h>
#define SWAP(a, b){\
	int temp;\
	temp = a;\
	a = b;\
	b = temp;\
}

int main(){
	int num;
	int i, j;
	int arr[1000];
	
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		getchar();			scanf("%d", &arr[i]);
	}

	
	for(i = 0; i < num-1; i++){
		for(j = 0; j <num-i-1; j++){
			if(arr[j]> arr[j+1]){
				SWAP(arr[j], arr[j+1]);
			}
		}	
	}
	
	for(i = 0; i < num; i++){
		printf("%d\n", arr[i]);
	}

}
