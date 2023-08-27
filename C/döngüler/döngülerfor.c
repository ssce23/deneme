#include <stdio.h>
#include <math.h>

int main() {
	int i;
	int sum = 0;

	for (i = 1; i<=100;i++){
		sum+=i;
	}

	printf("ilk 100 sayının toplamı %d\n", sum);
	
	return 0;
}