#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	// char* strtok(char* s, const char* ayraç) s'in içerisinde ayraç stringi arar.
	// bulmazsa NULL döner
	// Bulursa o bölümden böler
	// spnraki her çağrıda devam eder
	char metin[] = "Merhabalar, Sayın Başkanlar, Sayın konular, aramıza hoş geldiniz.";
	char* ayrac = ",";
	char* sptr;
	sptr = strtok(metin,ayrac);
	while(sptr != NULL){
		printf("%s\n", sptr);
		sptr = strtok(NULL, ayrac); //NULL neden geri döndürür
	}


	return 0;
}