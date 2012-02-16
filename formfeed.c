#include <stdio.h>

void main()
{
	char *a = "Sanket";
	while(*a != '\0')
		printf("%c\f", *a++);
	printf("\r");
}
