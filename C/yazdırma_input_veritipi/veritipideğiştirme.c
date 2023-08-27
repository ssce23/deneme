#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	int x = 10;
	float y = 6.5; ///???? niye 0

	int z = x+y;
	float w = x+y;

	printf("%d\n", z);
	printf("%.2f\n", w); //.2 ekrana yazdırırken 0ı değiştirir w değişmez

	x = 34;
	y = 4.7;

	z = x + (int)y;
	w = (float)x + y;
	printf("%d\n", z);
	printf("%f\n", w);

}

