#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	char **ptr;
	char * src = "000123456string";

	int result;

	result = (int)strtol(src,ptr,10);

	printf("%d\n%s\n",result,*ptr);
}
