#include <stdio.h>

int main(){

	int a = 21;
	int*b;
	int c;

	printf("%d, %d, %d\n",&a,&b,&c );
/*	b = &a;
	printf("%d\n",*b);
	printf("%d\n",&b );
	printf("%d\n", b);
*/
/*	*b = &a;
	printf("%d\n",*b );
	printf("%d\n",&b );
	printf("%d\n",b );
*/
	printf("%d\n", b);
	*b = 5;
	printf("%d\n",*b );
	printf("%d\n",&b );
	printf("%d\n",b );


	return 0;
}