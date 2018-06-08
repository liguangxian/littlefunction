#include <stdio.h>

#include "defs.h"
void fundisplay()
{
	fundefs();
	fundisplay();
}

void fundefs()
{
	printf("defs\n");
}
void funbuffer()
{
	printf("buffer\n");
}