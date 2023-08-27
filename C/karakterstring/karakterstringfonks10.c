#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	// size_t strcspn(const char* s1, const char* s2)
	// s1'in içerisinde, s2'deki herhangi bir karakterin bulunudğu yere kadar yazar
	char* s1 = "Toshiba laptop 4/10 puana sahip";
	char* s2 = "10 qldık";
	int ret_val;
	ret_val = strcspn(s1,s2);
	printf("%d\n", ret_val );

	//size_t strspn(const char* s1, const char* s2)
	// s1'in içinde sadece s2'deki karakterleri içeren İLK kısmı döndürür
	s1 = "0590 401 2452";
	s2 = "1234567890";
	ret_val = strspn(s1,s2);
	printf("%d\n", ret_val); 

	// char* strpbrk(const char* s1, const char* s2)
	// s1içinde herhangi s2den bulana kadar durur
	// bulduğu yerden sonrasına pointer tutar
	char* s3 = "Toshiba laptop 4/10 puana sahip";
	s2 = "10qldık";
	char* ret_val_c = strpbrk(s3,s2);
	printf("%s\n", ret_val_c );

	// char* strstr(const char* s1, const char* s) s1'in içine s2'nin 
	//bulunduğu ilk kısmı pointer döndürür
	// s1 içinde s2 varmı kontrol olarak kullanılabilir

	s2 = "401";
	ret_val_c = strstr(s1,s2);
	printf("%s\n",ret_val_c );
	// bul ve değiştir

	char metin[] = "Bu cümle birazdan büyük bir ihtimalle değişecek.";
	char* bul = "bi";
	char* değiştir = "bü";
	char* sptr = metin;
	puts(metin);
	while((sptr = strstr(metin,bul))!= NULL){
		strncpy(sptr, değiştir,2);
	}
	puts(metin);

	return 0;
}