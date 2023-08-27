#include <stdio.h>

int main(){
	int *p;
	int *q;
	int x = 10;
	int y = 20;

	printf("%d\n", &x );
	printf("%d\n", p );
	p = &x;
	printf("%d\n", &p );
	printf("%d\n", p );
	printf("%d\n", *p);

	q = &y;
	printf("%d\n", &q);
	printf("%d\n", q);
	printf("%d\n", *q);

	puts(" ");
	
	q=p;
	printf("%d\n", &q);
	printf("%d\n", q);
	printf("%d\n", *q);
	printf("%d\n", y);
	return 0;
} //sor neso academy bak