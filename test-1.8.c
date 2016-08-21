#include <stdio.h>

/* count blank, tab and newlines */
main()
{
	int c, bk, tb, nl;
	
	bk = tb = nl = 0;
	while ((c=getchar()) != EOF)
		if (c == ' ')
			++bk;
	    if (c == '\t')
			++tb;
		if (c == '\n')
			++nl;
	printf("blank=%d\ntab=%d\nnewlines=%d\n",bk,tb,nl);
}
