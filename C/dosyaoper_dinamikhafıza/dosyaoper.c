#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

	char* yazilacak = "Dosya açma işlemi başarısız.";


	FILE* dosya;

	dosya = fopen("ilk.txt","w"); // yazma izni ile dosya açıyoz
	if(dosya == NULL){
		printf("Dosya açılmadı\n");
	}
	else{
		fprintf(dosya, "ala %s\n",yazilacak );
	}

	fclose(dosya);


	return 0;
}