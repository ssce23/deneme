#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	char kar = 'z'; // ASCII de z 122dir c ASCII çalışır
	int kar1_int = kar; // == 122

	//isdigit()
	int a = '4'; // girilen karakterin rakam olup olmadığına bakar 1=rakam 0=değil
	printf("%d \n", isdigit(a));

	//isalpha()
	char harf = 'e';
	printf("%d\n", isalpha(harf));

	//isalnum()
	int z = 4;	// rakam yada harf olup olmadığına bakar.
	char y = 'a';
	printf("%d\t%d\n\n", isalnum(z),isalnum(y));

	//islower() girilen char küçük değilse 0
	printf("%d %d\n",islower(y),islower('H')); 

	//isupper() girilen char büyük değilse 0
	printf("%d  %d\n", isupper(y), isupper('H'));

	//isspace() boşluk var mı bakar /f /n /t /v /r de dahil
	printf("%d  %d\n",isspace(a), isspace(' '));

	//ispunct() girilen char sembolse 1 değilse 0
	printf("%d  %d  %d\n",ispunct(a), ispunct(','), ispunct('.'));

	//tolower() büyüğü küçükğe çeviri
	printf("%c\n",tolower('H') );

	//toupper() küçüğü büyüğe
	printf("%c\n",toupper('h') );


	return 0;
}