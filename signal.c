#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int *i;

void hi(int j)
{
	i=(int *)malloc(1*sizeof(int));
	if(i==NULL)
		exit(0);
	printf("Done.%d\n", j);
}

int main()
{
	int j;
	i = 0;
	signal(SIGSEGV, hi);
	j=*i;
}
