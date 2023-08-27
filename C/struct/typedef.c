#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int TAMSAYI; // int yerine TAMSAYI atıyor int = TAMSAYI olur
/*
struct kişi{
	size_t yas;
	char* isim;
	size_t dyil;
};
typedef struct kişi Kişi;
*/

typedef struct{
	size_t yas;
	char* isim;
	size_t dyil;
} KİŞİ;

int main(){
	KİŞİ insan;
	insan.yas = 26;
	insan.isim = "Asena";
	insan.dyil = 1997;

	printf("Isim: %s\nYas: %d\nDogum yili: %s",insan.isim, insan.yas, insan.dyil);

	return 0;
}