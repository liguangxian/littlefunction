#include <stdio.h>
#include <stdbool.h>

void main()
{
	struct{
		char a[9];//9
	}s1;
	struct{
		char a[3];
		char b[6];//3+6
	}s2;
	struct{
		int a;
		char b[9];//4+12
	}s3;
	struct{
		int a;
		char b[7];//4+8
	}s4;
	struct{
		short a;
 		char b[9];//2+10
	}s5;
	struct{
		int a;
		char b[3];
		char c[6];//4+4+8
	}s6;
	struct{
		int a;
		double b;
		char c[6]; //8+8+8
	}s7;
	struct{
		int a;
		char c[6];
		double b;//8+8+8
	}s8;
	typedef struct{
		char c[6];
		double b;
		int a; // 8+8+8
	}s9;
	struct{
		char d;
		s9 e;  
		int f;//8+24+8 =40
	}s10;
	struct{
		char d;
		s9 *e;
		int f;
	}s11;     // 8+8+8
	struct{
		char d;
		struct s9 *e; //64位机器指针占用8字节
		int f;//8+8+8
	}s12;
	struct{
		int a;
		int b;
		char c;
		bool e;
		bool f;
		char k;
	}s13;
	printf("s1 = %d\n",sizeof(s1));
	printf("s2 = %d\n",sizeof(s2));
	printf("s3 = %d\n",sizeof(s3));
	printf("s4 = %d\n",sizeof(s4));
	printf("s5 = %d\n",sizeof(s5));
	printf("s6 = %d\n",sizeof(s6));
	printf("s7 = %d\n",sizeof(s7));
	printf("s8 = %d\n",sizeof(s8));
	printf("s9 = %d\n",sizeof(s9));
	printf("s10 = %d\n",sizeof(s10));
	printf("s11 = %d\n",sizeof(s11));
	printf("s12 = %d\n",sizeof(s12));
	printf("s13 = %d\n",sizeof(s13));
}
