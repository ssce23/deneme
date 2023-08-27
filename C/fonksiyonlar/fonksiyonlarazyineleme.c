#include <stdio.h>

long fakt(int x){
	if (x <= 1){
		return 1;
	}
	return x*fakt(x-1);
}

int main() {
	
	int sayi;
	for (sayi = 0;sayi<20;sayi++)
		printf("%d! = %li\n",sayi,fakt(sayi));
	
	return 0;
}