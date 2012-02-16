#include <stdio.h>
#include <stdlib.h>

int main()
{
	while(1)
	{
		int *i = (int *)malloc(sizeof(int));
		*i=3;
	}
	return 0;
}
