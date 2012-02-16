#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
	wchar_t b = L'\u0922';
	wprintf(L"This is : %lc \n",b);
	return 0;
}
