#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t p1, p2, p3;
	p1 = fork();
	p2 = fork();
	p3 = fork();
	printf("%d\t%d\t%d\n", (p1 && (p1/p1)), (p2 && (p2/p2)), (p3 && (p3/p3)));
	return 0;
}
