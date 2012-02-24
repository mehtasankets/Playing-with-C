#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

// I ran command "ulimit -n 50" before running this program

int main()
{
	int i=0, j=0;
	for(i=0; i< 100; i++)
	{
		j=open("fork.c", O_RDONLY);
		if(j == -1)
		{
			perror("Error");
			break;
		}
		printf("%d\n", j);
	}
	return 0;
}
