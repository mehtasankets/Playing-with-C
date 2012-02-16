#include <stdio.h>

int main()
{
	int *p = (int *)malloc(sizeof(int));
	printf("%d\n", *p);
	*p = 123;
}
