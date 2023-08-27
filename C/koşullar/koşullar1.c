#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main() {
	char* ışık = "kırmızı";
	if (ışık == "kırmızı"){
		printf("Dur\n");
	}
	else if (ışık == "yeşil"){
		printf("İlele\n");
	}

	int hız = 130;

	if(hız>90) {
		printf("Limiti aştın yavaş git\n");
	}
	else if (hız<90){
		printf("Limiti aşmadın\n");
	}

	printf("%d\n", 5==5 ); //True 1dir
	printf("%d\n", 5<5); //False 0dır
}