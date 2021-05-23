#include <unistd.h>
#include <stdio.h>
#include "../ex07/ft_rev_int_tb.c"

int ft_rev_int_tab(int *tab, int size);

int main(void) {
	
	int a[5] = [1,2,3,4,5];
	int i = 0;

	printf("a = %d",a);
	printf("Calling ft_rev_int_tab(a, 5);\n"); 
	//ft_rev_int_tab(&a, 5);
	//printf("a= ");

    return (0);
}

