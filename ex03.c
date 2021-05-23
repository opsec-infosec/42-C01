#include <unistd.h>
#include <stdio.h>
#include "../ex03/ft_div_mod.c"

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void) {
	int a = 25;
	int b = 10;
	int div = 0;
	int mod = 0;

	printf("a = %d: b = %d: div = %d: mod = %d\n",a,b,div,mod);
	printf("Calling ft_div_mod(a, b, div, mod);\n");
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d: b = %d: div = %d: mod = %d\n",a,b,div,mod);

    return (0);
}

