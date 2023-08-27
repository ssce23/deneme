#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	// int strcmp(const char* s1, const char* s2) argümanları kıyaslar.
	//aynılarsa 0 döndürür.
	// s1>s2 ise 0'dan büyük bir değer döndürür.
	// s1<s2 ise 0'dan küçük bir deper döndürür.
	char* s1 = "Team Fortress 2";
	char* s2 = "Steam";
	char* s3 = "Steam";
	char* s4 = "Team Fortress 1";
	printf("strcmp(s1,s2) = %d\n",strcmp(s1,s2));
	printf("strcmp(s3,s2) = %d\n",strcmp(s3,s2));
	printf("strcmp(s1,s4) = %d\n",strcmp(s1,s4));

	// int strncmp(const char* s1, const char* s2, size_t n) n karakterleri karşılatrır
	//aynılarsa 0 döndürür.
	// s1>s2 ise 0'dan büyük bir değer döndürür.
	// s1<s2 ise 0'dan küçük bir deper döndürür.
	printf("strcmp(s1,s2) = %d\n",strcmp(s1,s2),4);
	printf("strcmp(s3,s2) = %d\n",strcmp(s3,s2),14);
	printf("strcmp(s1,s4) = %d\n",strcmp(s3,s4),100);

	s1 = "ABC";
	s2 = "abc";
	printf("strcmp(%s,%s) = %d\n",s1,s2,strcmp(s1,s2));

	 // ASCII Değerleri
    s1 = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
    s2 = "abcdefghijklmnopqrstuwxyz";

    for(int i=0;i<strlen(s1);i++){
        printf("%c:%2d\t%c:%2d\n",s1[i],s1[i],s2[i],s2[i]);
    }
	


	return 0;
}