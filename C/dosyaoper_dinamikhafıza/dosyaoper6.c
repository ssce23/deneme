#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct {
	size_t yıl;
	char* isim;
} Film;

int main(){

	FILE* dosya;
	dosya = fopen("C:\\Users\\Toshiba\\Desktop\\C\\film_listesi.txt","a");

	Film a = {2004, "The Machinist"};

	fprintf(dosya, "Film: %s\t Çıktığı yıl: %d\n", a.isim, a.yıl);


	fclose(dosya);
	return 0;
}