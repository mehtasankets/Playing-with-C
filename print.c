#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void funprint(char *arg, ...)
{
	va_list ap;
	va_start(ap, arg);
	while(*arg)
	{
		switch(*arg)	
		{
			case 'c':
				printf("%c ", va_arg(ap, int));
				break;
			case 's':
				printf("%s ", va_arg(ap, char *));
				break;
			case 'i':
				printf("%d ", va_arg(ap, int));
				break;
			case 'f':
				printf("%f ", va_arg(ap, double));
				break;
			default:
				printf("\n");
				break;
		}
		arg++;
	}
	printf("\n");
	va_end(ap);
}

int main()
{
	funprint("ci", 'S', 2);
	funprint("sci", "Sanket", 'A', 4);
	funprint("scfi", "Mehta", 'D', 3.14, 12);
	return 0;
}
