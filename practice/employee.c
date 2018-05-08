#include <stdio.h>

struct employee{
	char empname[30];
	char number[30];
	int salary;
};

int main(){
	struct employee emp = {"KIM", "950613-2", 20000};
	printf("%s %s %d\n", emp->empname, emp->number, emp->salary);	
}
