#include <stdio.h>

void a()
{
	static int s = 0;
//	int s = 0;
	printf("S:%d\n",s);
	s++;
}

void main()
{
	a();
	a();
	a();
	a();
	a();
}
