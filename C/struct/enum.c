#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { // sırayla numaralandırır
	OCAK=1,SUB,MAR,NIS,MAY,HAZ,TEM,AGU,EYL,EKI,KAS,ARA
} AY; // =1 olasaydı 0dan başlardı

typedef struct{
	size_t yas;
	char* isim;
	AY day;
	size_t dyil;
} KİŞİ;

int main(){
	

	KİŞİ insan1;
	insan1.day = SUB;
	insan1.yas = 25;
	insan1.isim = "Yusuf Hakan";
	insan1.dyil = 1998;
	printf("Isim: %s\tYas: %d\t Dogum yili/ayi: %d/%d\n", insan1.isim, insan1.yas, insan1.dyil,insan1.day);



	return 0;
}
