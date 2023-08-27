#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	int ret_val;
	//puts() sonuna yeni satır karakterini koyar normal görevvi shelle bastrımaktır
	puts("S.a");

	//putchar(char) girile karakteri bastırır sonunda \n koymaz  
	//int değeri döndürür.
	char c = 'a';
	putchar(c);
	puts("");

	//sprintf(char*, const char* format, ...) terminale yazdırır gibi bir stringe yazdırır.
	//verilen karakter saysının döndürür
	//hata durumunda EOF verir
	//sayı değerlerini stringe çevirir.
	char string_sprintf[100];
	ret_val = sprintf(string_sprintf,"%d\t%s\t%f\n",23,"merhaba",3.14);
	printf("%s\n",string_sprintf);
	printf("%d\n",ret_val );

	//sscanf(char*, const char* format, ...) bir stringten input almak
	//okunan değişken sayısı kadar değer gdöndürür.
	// hata alırsa EOF.
	char girdi[] = "5.43 MerhabaArkadaşlar,aramızahoşgeldiniz! 101";
	double d;
	char* sptr;
	int n;
	ret_val = sscanf(girdi,"%lf\t%s\t%d\t%s", &d, sptr, &n);
	printf("%d\n",ret_val );
	printf("%f\t%s\t%d\n", d, sptr, n);







	return 0;
}