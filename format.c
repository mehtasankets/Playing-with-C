#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 67305985;
	printf("%d\n", *((char *)&a));
	if(*((char *)&a) == 0)
		printf("Big Endian..!!!\n");
	else
		printf("L'll Endian..!!!\n");
	return 0;
}
