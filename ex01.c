#include <unistd.h>
#include <stdio.h>
#include "../ex01/ft_ultimate_ft.c"

void ft_ultimate_ft(int *********nbr);

int main(void) {

	// 9 ptr to prt
	int a = 10;
	int *ptr = &a;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;

	printf("a = %d\n",a);
	printf("Calling ft_ultimate_ft(&ptr8);\n");
	ft_ultimate_ft(&ptr8);
	printf("a = %d",a);	
	return (0);

}

