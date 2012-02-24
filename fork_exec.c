#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	execl("/bin/ls", "/bin/ls", NULL);
	printf("Done.\n");
	return 0;
}
