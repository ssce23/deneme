#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


struct kişi{
	size_t yas;
	char* isim;
	size_t dyil;
};


int main(){

	struct kişi insan1;
	insan1.yas = 25;
	insan1.isim = "Yusuf Hakan";
	insan1.dyil = 1998;
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan1.isim, insan1.yas, insan1.dyil);

	printf("%d\n", sizeof(insan1));

	struct kişi insan2 = {20, "Gizem Nur", 2003};
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan2.isim, insan2.yas, insan2.dyil);

	struct kişi insan3 = {20};
	printf("Isim: %s\tYas: %d\t Dogum yili: %d\n", insan3.isim, insan3.yas, insan3.dyil);

	struct kişi* insan4; //struct kişi veri tipi ile insan4 adlı pointer oluşturuyoruz.
	insan4 = (struct kişi*) malloc(sizeof(struct kişi));
	(*insan4).yas = 24;
	(*insan4).isim = "Ahmet Enes";
	(*insan4).dyil = 1999;

	printf("%s\n %d\n %d\n",insan4->isim, insan4->yas, insan4->dyil);


	return 0;
}