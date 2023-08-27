#include <stdio.h>
#include <stdlib.h>

void bubblesort(int dizi[], size_t boyut);

//argc = girilen argüman sayısı
//argv = girilen argümanlar

int main(int argc, char* argv[]){

	printf("%d\n", argc );

	int* sayilar;
	int boyut = argc-1;
	sayilar = (int*) malloc(boyut*sizeof(int));
	int sayi;



	for(int i=1;i<argc;i++){
		sayilar[i-1]  = atoi(argv[i]); // atoi string içindeki sayıları inte dpnuştürür
	}
	bubblesort(sayilar,boyut);
	for(int i=0;i<boyut;i++){
		printf("%d\n", sayilar[i]);
	}
	return 0;
}
// shell neden 0 ile 1 i okumuyor
void bubblesort(int dizi[], size_t boyut){
	int i, j, gecici;
	
	for(i=1;i<boyut;i++){
		for(j=0;j<boyut-1;j++){
			if(dizi[j]>dizi[i]){
				gecici=dizi[j];
				dizi[j] = dizi[i];
				dizi[i] = gecici;
			}
		}
	}
}