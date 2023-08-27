#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct {
	size_t yıl;
	char* isim;
} Film;


int main(){

	Film film = {1996, "Star Wars"};

	FILE* dosya;
	dosya = fopen("Film.txt","w");

	fprintf(dosya, "%s\nÇıkış Yılı: %d", film.isim, film.yıl  );
	fclose(dosya);
	
	return 0;
}