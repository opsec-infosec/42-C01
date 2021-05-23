#include <unistd.h>
#include <stdio.h>
#include "../ex02/ft_swap.c"

void ft_swap(int *a, int *b);

int main(void) {
	int a = 10;
	int b = 20;
	printf("a = %d: b = %d\n",a,b);
	printf("Calling ft_swap(&a, &b);\n");
	ft_swap(&a,&b);
	printf("a = %d: b = %d\n",a,b);

    return (0);
}

