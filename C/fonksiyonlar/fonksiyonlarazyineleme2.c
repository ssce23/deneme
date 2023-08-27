#include <stdio.h>

long fib(int x){
	if (x==1 || x==2){
		return 1;
	}
	return fib(x-1)+fib(x-2);
}

int main(){
	int sayi;
	int kul;
	scanf ("%d",&kul);
	for (sayi=1;sayi<=kul;sayi++)
		printf("fib(%d) = %li \n",sayi,fib(sayi));
	
	return 0;
}