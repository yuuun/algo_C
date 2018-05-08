#include <stdio.h>

#define PI 3.141592

#define AREA(r) (r)*(r)*PI
int main(){
	double r;
	scanf("%lf", &r);
	printf("r * r * PI = %g", AREA(r));

}
