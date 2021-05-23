#include <unistd.h>
#include <stdio.h>
#include "../ex04/ft_ultimate_div_mod.c"

void ft_ultimate_div_mod(int *a, int *b);

int main(void) {
	int a = 25;
	int b = 10;

	printf("a = %d: b = %d:\n",a,b); 
	printf("Calling ft_div_mod(a, b);\n"); 
	ft_ultimate_div_mod(&a,&b);
	printf("a(div) = %d: b(mod) = %d: ",a,b);

    return (0);
}

