#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <stdbool.h>

int main() {
	int anapara = 5000;

	float faiz;
	if (anapara > 1000 && anapara < 10000){
		faiz = 4.5;
	}
	else if (anapara > 300 && anapara <=1000 ){
		faiz = 3.5;
	}
	else{
		faiz = 2;
	}
	printf("%.3f\n", faiz);

/////////////////////////////////////////////////////////////

	bool ateş, tansiyon, nefes_d;
	ateş = true;
	tansiyon = nefes_d = false;

	if (ateş || tansiyon || nefes_d){
		printf("doktora git\n");
	}
	else {
		printf("sorun oyk\n");
	}
//////////////////////////////////////////////////////////////

	bool a = false;
	if (!a){
		printf("a yanlış\n");
	}
	else {
		printf("a doğru\n");
	}
}

