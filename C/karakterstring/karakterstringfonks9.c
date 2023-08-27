#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    // char* strchr(const char* s, char c) c karakterini s stringi içine İLK bulunduğu yeri gössterir
    // bulursa o konuma işaret eden bir pointer döndürür bulfuğu yerde sonrasını döndürür
    // bulmazsa NULL döndürür.
    char* s = "Yildiz Okullari Mezun";
    char c1 = 'l';
    char c2 = 'u';
    char* ret_val = strchr(s,c1);
    puts(ret_val);
    // koşulla daha kullanışlı olabilir


    // char* strrchr(const char* s, char c) c karakterini s stringi içinde bulunduğu SON yeri gösterir
    // o konumu gösteren pointer döndürür
    // bulmazsa NULL döndürür 

    ret_val = strrchr(s,c2);
    puts(ret_val);



    return 0;
}