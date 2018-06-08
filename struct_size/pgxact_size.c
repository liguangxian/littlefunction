#include <stdio.h>
#include <stdbool.h>

/*
 * Assumed cache line size. This doesn't affect correctness, but can be used
 * for low-level optimizations. Currently, this is used to pad some data
 * structures in xlog.c, to ensure that highly-contended fields are on
 * different cache lines. Too small a value can hurt performance due to false
 * sharing, while the only downside of too large a value is a few bytes of
 * wasted memory. The default is 128, which should be large enough for all
 * supported platforms.
 */
#define PG_CACHE_LINE_SIZE 128


/* Calculation of padding for PGXACT.  Update this after changing of PGXACT. */

#define PGXACTPadSize (128 - 2 * sizeof(int) - 2 * sizeof(char) - 2 * sizeof(bool))
void main()
{
	typedef struct PGXACT{
		int a;
		int b;
		char c;
		bool e;
		bool f;
		char k;
		char pad[PGXACTPadSize];
	}PGXACT;
	
	typedef union PGXACTpadded
	{
		PGXACT xact;
		char pad[PG_CACHE_LINE_SIZE];
	}PGXACTpadded;
	struct PGXACT pgxact;
	union PGXACTpadded pgxact_pad;
	printf("pgxact size = %d, address = %#X\n",sizeof(pgxact),&pgxact);
	printf("pgxact.a address = %#X\n",&pgxact.a);
	printf("pgxact.pad address = %#X\n",&pgxact.pad);


	printf("pgxact_pad size = %d, address = %#X\n",sizeof(pgxact_pad),&pgxact_pad);
	printf("pgxact_pad.xact.a address = %#X\n",&pgxact_pad.xact.a);
	printf("pgxact_pad.xact.pad address = %#X\n",&pgxact_pad.xact.pad);

}
/* 运行结果
	pgxact size = 128, address = 0XFFF90E30
	pgxact.a address = 0XFFF90E30
	pgxact.pad address = 0XFFF90E3C
	pgxact_pad size = 128, address = 0XFFF90DB0
	pgxact_pad.xact.a address = 0XFFF90DB0
	pgxact_pad.xact.pad address = 0XFFF90DBC

*/

