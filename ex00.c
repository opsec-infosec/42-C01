#include <unistd.h>
#include <stdio.h>
#include "../ex00/ft_ft.c"

void ft_ft(int *nbr);

int main(void) {

	int x = 10;
	printf("x = %d\n",x);
	printf("Calling ft_ft(&x);\n");
	ft_ft(&x);
	printf("x = %d\n",x);
    return (0);
}

