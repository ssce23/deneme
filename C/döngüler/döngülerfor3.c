#include <stdio.h>
#include <math.h>

int main() {

	int sayı = 105;
	int k;

	for (k=2; k < sayı; k++){
		printf("su an k: %d\n", k);
		if(sayı % k == 0){
			printf("%d sayisi asal degil\n", sayı);
			break;
		}
	}

	return 0;
}
