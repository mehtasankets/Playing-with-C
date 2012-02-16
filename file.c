#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp[10];
	char name[10][20], temp[20];
	int i =0;
	for (i=0; i<10; i++)
	{
		sprintf(temp, "File_%d",i);
		strcpy(name[i], temp);
		fp[i] = fopen(name[i],"w");
		fprintf(fp[i], "This is file number %d\n", i);
	}
	fcloseall();
	return 0;
}
