#include <stdio.h>

/* copy intput to output */
main()
{
	int c;
	
	while((c=getchar()) != EOF)
	{
		putchar(c);
	}
}
