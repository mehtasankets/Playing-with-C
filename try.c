#include <stdio.h>
/* Unbounded pointers occupy one word.  */
#   define PTR_SIZE 4
/* Unbounded pointer return values are passed back in the register %eax.  */
#   define RTN_SIZE 0
/* Use simple return instruction for unbounded pointer values.  */
#   define RET_PTR ret
/* Don't maintain frame pointer chain for leaf assembler functions.  */
#   define ENTER
#   define LEAVE
/* Stack space overhead of procedure-call linkage: return address only.  */
#   define LINKAGE 4
/* Stack offset of return address after calling ENTER.  */
#   define PCOFF 0
#   define  END ;
#   define TAB "\t"

int main()
{
	int a=10 END
/*
	while(1)
	{
		if(printf("%d", printf("%d", 3)))
			break END
		continue END
	}
*/
	printf("Sanket"TAB TAB TAB" mehta.."TAB) END
	printf("%#x\n",a) END
	return 0 END
}
