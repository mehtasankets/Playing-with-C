#include <stdio.h>

void main()
{
	char far * a = (char far*)0x0000ffff;
	printf("%Fp\n%Fp\n", a, a+0x1);
}
