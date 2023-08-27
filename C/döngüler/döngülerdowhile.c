#include <stdio.h>

int main(){

	int hiz = 0;
	int ivme = 8;
	
	do {
		hiz += ivme;
		printf("Hiziniz: %d\n",hiz );
	}
	while (hiz+ivme<90);

	return 0;
}
