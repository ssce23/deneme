#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	//char* strcat(char* s1, const char* s2) s2'nin içini s1'in sonuna ekler.
	//s1'in sonundaki \0 kaldırır son halinin sonuna ekler
	//s1'i döndürür.
	char sptr1[100] = "Spectrum";
	char* sptr2 = " 01Spectrum";
	strcat(sptr1,sptr2);
	puts(sptr1);

	// char* strncat(char* s1; const s2, size_t n) s2'nin içeriğinden n tane karakter
	//kopyala ve s1e yapıştır //\0 gene kaldırır ve sonuna ekler
	//s1i döndürür.
	char sptr3[50] = "Launching a Game";
	strncat(sptr1, sptr3, 10);
	puts(sptr1);



	return 0;
}