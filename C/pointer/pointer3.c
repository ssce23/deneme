#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 100

void yerdegistir(int* birpoint, int* ikipoint){
	int gecici = *birpoint;
	*birpoint = *ikipoint;
	*ikipoint = gecici;
}

int bubblesort(unsigned int dizi[], size_t boyut){
	int i, j, gecici;
	
	for(i=1;i<boyut;i++){
		for(j=0;j<boyut-1;j++){
			if(dizi[j]>dizi[i]){
			/*
				gecici=dizi[j];
				dizi[j] = dizi[i];
				dizi[i] = gecici;
			*/
				yerdegistir(&dizi[j], &dizi[i]);
			}
		}
	}
}

void diziyi_yazdir(const int dizi[], size_t boyut){
	size_t i;
	
	puts("Dizi:");
	
	for (i=0;i<boyut;i++){
		printf("dizi[%d]: %d ",i,dizi[i]);
	}
	
	puts("\n");
}


int main(){
	clock_t sayac;
	double sure;
	sayac = clock();

	srand(time(NULL));

	unsigned int dizi[BOYUT];
	unsigned int i = 0;
	size_t boyut=BOYUT;

	for (;i < boyut; i++){
		dizi[i] = 1+rand()%10000;
	}
	
	diziyi_yazdir(dizi,boyut);
	bubblesort(dizi,boyut);
	diziyi_yazdir(dizi,boyut);

	sayac = clock() - sayac;
	sure = ((double)sayac) / CLOCKS_PER_SEC;

	printf("Sureniz %f\n",sure);


	return 0;
}