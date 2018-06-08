#include <stdio.h>
#include <time.h>

void main(){
	int a,b,c,d,e,f,g,k,l,m,n;
	int t11,t12,t21,t22,t31,t32,t41,t42;
	t11 = clock();	
	for(int i = 0; i < 20000000; i++){
		a++;
		b++;
		c++;
		d++;
	}
	t12 = clock();
	for(int i = 0; i<20000000; i++){
		e++;
		f++;
		g++;
	}
	t21 = clock();
	for(int i=0;i<20000000;i++){
		k++;
		k++;
	}
	t22 = clock();
	for(int i=0;i<20000000;i++){
		l=l+2;
	}
	t31 = clock();
	printf("first  values = %d\n",t12 - t11);
	printf("second values = %d\n",t21 - t12);
	printf("Third  values = %d\n",t22 - t21);
	printf("Quarte values = %d\n",t31 - t22);
}

