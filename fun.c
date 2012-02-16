#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void funprint(char *arg, ...)
{
	va_list ap;
	va_start(ap, arg);
	printf("{%s}", va_arg(ap, char *));
	printf("\n");
	va_end(ap);
}

int main()
{
	funprint("sanket ","Mehta ""Sanks");
	return 0;
}
