#include <stdio.h>


void main()
{
	typedef struct{
		int a;
		short b;
	}struct_1;
	typedef struct_1* struct_0;


	typedef struct{
		int a;
		char b;
		struct_1 s1;
	}struct_2;

	typedef struct{
		int a;
		char b;
		long int c;
		struct_1 s1;
	}struct_3;

	typedef struct{
		int a;
		char b;
		struct_1 * s1;
	}struct_4;
	typedef struct{
		struct_1 * s1;
	}struct_5;
	
	typedef struct{
		struct_0 s1;
	}struct_6;
	
	union union_0{
		int a;
		char b[30];
		long int c;
	}union_1;
	union test_a{
		int a;
		double b;
	};
	

	
	typedef struct{
		int a;
		short b;
		union union_0 *c;
	}struct_7;
	
	typedef struct{
		int a;
		struct struct_1* b;
	}struct_8;

	union test{
		long int a;
		char c[10];
	};

	typedef struct{
		char b[7];
	}struct_size7;
	typedef struct{
		char a[9];
	}struct_size9;

	union test_3{
		struct_size7 c;
		struct_size9 d;
	};

	typedef struct{
		int a;
		char b[10];
	}struct_12;
	union test_11{
		int a;
		char b[10];
	};
	union test_3 union_7add9;
	union test test_1;	
	union test_a test_2;
	union test_11 test_12;
	printf("struct_1 size = %d\n",sizeof(struct_1));
	printf("struct_2 size = %d\n",sizeof(struct_2));
	printf("struct_3 size = %d\n",sizeof(struct_3));
	printf("struct_4 size = %d\n",sizeof(struct_4));
	printf("struct_5 size = %d\n",sizeof(struct_5));
	printf("struct_6 size = %d\n",sizeof(struct_6));
	printf("union_1  size = %d\n",sizeof(union_1));
	printf("struct_7 size = %d\n",sizeof(struct_7));
	printf("struct_8 size = %d\n",sizeof(struct_8));
	printf("test_1 size = %d\n",sizeof(test_1));
	printf("test_2 size = %d\n",sizeof(test_2));
	printf("struct_size7 = %d\n",sizeof(struct_size7));
	printf("struct_size9 = %d\n",sizeof(struct_size9));
	printf("union_7add9 = %d\n",sizeof(union_7add9));
	printf("struct_12 = %d\n",sizeof(struct_12));
	printf("test_12 = %d\n",sizeof(test_12));
}
