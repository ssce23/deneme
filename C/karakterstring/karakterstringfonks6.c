#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	// size_t strlen(const char* s) stringin boyutunu döndürür \0 karakterini saymaz
	char* s = "Rush Team'de beraber oynadığımız adamlar ilk 100e girmiş.";
	printf("strlen(s) = %d\n", strlen(s)); //\0 karakteri sayesinde karakter dizilerini
	// fonksiyona gönderdiğimizde uzuluğunu göndermemize gerek kalmaz

	// char* strcpy(char* s1, const char* s2) s2'nin içeriğini s1e kopyalar
	// sonuna \0 da ekler
	// s1'i döndürür.
	char sptr[20];
	char sptr2[] = "Let's Speak something else";
	char* ret_val;
	ret_val = strcpy(sptr, sptr2);
	puts(sptr);
	puts(ret_val);
	puts("");

	// char* strncpy(char* s1, const char* s2, size_t n) s2yi n karakter kadar kopyala
	// 2. strinden daha azsa n \0 eklemez
	// s1'i döndürür
	char sptr3[10];
	int n = 9;
	ret_val = strncpy(sptr3,sptr2,n);
	sptr3[n] = '\0';
	puts(sptr3);
	puts(ret_val);



	return 0;
}