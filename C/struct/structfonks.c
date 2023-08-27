#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	size_t yas;
	char* isim;
	size_t dyil;
} KİŞİ;


void adresyaz (KİŞİ a){
	printf("%p\n",&a);
}

void adresyaz2 (KİŞİ* a){
	printf("%p\n",&(*a));
}


int main(){
	KİŞİ insan1;
	insan1.yas = 25;
	insan1.isim = "Yusuf Hakan";
	insan1.dyil = 1998;
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan1.isim, insan1.yas, insan1.dyil);

	printf("%d\n", sizeof(insan1));

	KİŞİ insan2 = {20, "Gizem Nur", 2003};
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan2.isim, insan2.yas, insan2.dyil);

	KİŞİ insan3 = {20};
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan3.isim, insan3.yas, insan3.dyil);

	KİŞİ* insan4; //struct kişi veri tipi ile insan4 adlı pointer oluşturuyoruz.
	insan4 = (KİŞİ*) malloc(sizeof(KİŞİ));
	(*insan4).yas = 24;
	(*insan4).isim = "Ahmet Enes";
	(*insan4).dyil = 1999;

	printf("%p\n",&insan3);
	printf("%p\n", &(*insan4));
	adresyaz(insan3); //pass by value hafıxada fazla yer tutar gerek yok
	adresyaz2(insan4);

	return 0;
}