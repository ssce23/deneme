#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

int main(){

	unsigned int zarsonuc;
	unsigned int sayac;
	unsigned int sonuc[6]={0};

	srand(time(NULL));

	for (sayac=0;sayac<600000;sayac++){
		zarsonuc = (rand()%6);
		sonuc[zarsonuc]++;
	}

	printf("Zar: Miktar:\n");
	size_t i = 0;
	for(;i<6;i++){
		printf("%d - %d\n",i+1,sonuc[i] );
	}
	
	return 0;
}