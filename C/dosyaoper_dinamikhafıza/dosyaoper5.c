#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

	FILE* dosya;
	dosya = fopen("C:\\Users\\Toshiba\\Desktop\\C\\film_listesi.txt","r");

	int yil;
	char isim[100];

	char* satir;

	if(dosya == NULL){
		puts("Hata var");
	}
	else{

		while(!feof(dosya)){
			if(fgets(satir,100,dosya)){
				sscanf(satir,"%s  %[^\n]d", &yil, isim);
                printf("%-9d %-s\n",yil,isim); //?????
			}
		}
	}


	return 0;
}