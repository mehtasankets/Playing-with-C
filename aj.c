#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a;
	char b[32];
	b[0] = '\0';
	for(a=10; a<100; a++)
	{
		strcat(b,"\\u090");
		strcat(b, itoa(a));
	}
	return 0;
}
