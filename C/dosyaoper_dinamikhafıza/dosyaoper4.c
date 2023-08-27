#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
//fgets(string, int, file) 1. yazacağı yer 2. kaç karakter ouyacağı 3. okuyacağı dosya

int main(){

	FILE* dosya;
	dosya = fopen("C:\\Users\\Toshiba\\Desktop\\C\\film_listesi.txt","r");
	char* okundu;

	if (dosya == NULL){
		printf("Hata var\n");
	}
	else {
		while (!feof(dosya)){
			if (fgets(okundu, 100, dosya)){
				printf("%s\n",okundu);
			}
		}
	}
	fclose(dosya);


	return 0;
}