#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){

	char* dosyaisim = argv[1];

	FILE* dosya = fopen(dosyaisim,"r");

	char string[1000];
	if (dosya == NULL){
		printf("Hata var\n");
		exit(-1);
	}

	while (!feof(dosya)){
		if (fgets(string,1000,dosya)){
			printf("%s\n",string );
		}
	}



	fclose(dosya);
	return 0;
}