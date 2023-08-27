//bunları char için dene
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define BOYUT 10

bool bul(const int dizi[], size_t boyut, int deger);
void diziyi_yazdir(const int dizi[], size_t boyut);

int main(){
	size_t boyut=BOYUT;
	int dizi[boyut];
	size_t i;
	
	srand(time(NULL));

	for (i=0;i<=boyut;i++){
		dizi[i]= 1+rand()%10000;
	}

	diziyi_yazdir(dizi,boyut);

	printf("Sayi giriniz:\n");
	int deger;
	scanf("%d",&deger);

	bool var = bul(dizi,boyut,deger);

	if (var == true){
		printf("Sayi mevcut\n");
	}
	else{
		printf("Sayi yok\n");
	}


	return 0;
}

bool bul(const int dizi[], size_t boyut, int deger){
	size_t i = 0;
	for (;i<=boyut;i++){
		if (dizi[i] == deger){
			return true;
		}
	}
	return false;
}

void diziyi_yazdir(const int dizi[], size_t boyut){
	size_t i;
	puts("Dizi:\n");

	for(i=0;i<=boyut;i++){
		printf("%d-",dizi[i]);
	}
	puts("");
}