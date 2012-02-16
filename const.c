#include <stdio.h>

void b(int *a)
{
	*a = 12;
}

void main()
{
	const int a =0;
	int *p = &a;
	*p = 123;
//	b(&a);
	printf("a:%d\n",a);
}
