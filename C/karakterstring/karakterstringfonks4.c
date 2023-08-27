#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
int main(){

	//fgets(char* s, int n, FILE dosya) argümanları vardır n kaç karakter okuyacağı dosya nereden input alacağı char içine yazılacak string
	char string[51];
	puts("50 karakter girin");
	fgets(string,51, stdin); //stdin klavyeden alır
	printf("%s\n", string);
	//scanf() boşluğu okumaz bitirir
	return 0;
}