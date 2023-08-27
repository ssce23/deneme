#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 30

void diziyi_yazdir(int dizi[], size_t boyut);
int dizi_top(int dizi[], size_t boyut);
void diziyi_degis(int dizi[], size_t boyut);// default olarak pass by referance olur

//void diziyi_yazdır(const int dizi[], size_t boyut);
//dersek const bunu pass by value alır dizinin orjinali değişmez


int main(){

	srand(time(NULL));

	int dizi[BOYUT];
	int i=0;
	size_t boyut=BOYUT;

	for(;i<boyut;i++){
		dizi[i]=1+rand()%100;

	}

	diziyi_yazdir(dizi,boyut);
	printf("Toplam: %d\n",dizi_top(dizi,boyut));

	diziyi_yazdir(dizi,boyut);
	diziyi_degis(dizi,boyut);
	printf("Toplam: %d\n",dizi_top(dizi,boyut));




	return 0;
}

void diziyi_yazdir(int dizi[], size_t boyut){
	size_t i;
	puts("Dizinin içi");
	for(i=0;i<boyut;i++){
		printf("%d\n", dizi[i]);
	}
}

void diziyi_degis(int dizi[], size_t boyut){
	size_t i;
	for(i=0;i<boyut;i++){
		dizi[i] *=10;
	}
}

int dizi_top(int dizi[], size_t boyut){
	size_t i;
	int toplam = 0;
	for (i=0;i<boyut;i++){
		toplam += dizi[i];
	}
	return toplam;
}