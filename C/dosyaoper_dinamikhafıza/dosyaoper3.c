#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct {
	size_t yıl;
	char* isim;
} Film;

int main(){

	Film film1 = {1996, "Star Wars"};
	Film film2 = {1999, "Fight Club"};
	Film film3 = {2023, "Oppenheimer"};
	Film film4 = {2019, "Dunkirk"};

	int filmsayi = 4;
	Film filmler[4] = {film1,film2,film3,film4};

	FILE* dosya;

	dosya = fopen("Film_listesi.txt","w");
	if(dosya == NULL){
		puts("Hata var");
	}
	else {
		int i = 0;
		while(!feof(dosya) && i<filmsayi){
			fprintf(dosya, "Film: %s\t Çıkış Yılı: %d\n",filmler[i].isim,filmler[i].yıl);
			i++;		
		}
	}
	fclose(dosya);

	return 0;
}
