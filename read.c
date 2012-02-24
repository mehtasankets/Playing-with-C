#include <stdio.h>
#include <unistd.h>

int main()
{
	char data[128];
	read(0, data, 100);
	write(1, data, 100);
}
