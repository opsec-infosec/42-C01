#include <unistd.h>
#include <stdio.h>
#include "../ex08/ft_sort_int_tab.c"

void ft_sort_int_tab(int *tab, int size);

int main(void) {
	
	int a[5] = {2,3,1,5,4};
	int i = 0;
	int size = (sizeof(a)/sizeof(int));

	printf("a = ");
	for (i = 0;i < size;i++)
		printf("%d ",*(a+i));
	printf("\nCalling ft_sort_int_tab(a, 5);\n");
	ft_sort_int_tab(a, size);
	printf("a = ");
	for (i = 0;i < size;i++)	
		printf("%d ",*(a+i));

    return (0);
}

