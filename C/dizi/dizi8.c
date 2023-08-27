//deneme.c ile kendin input alarak matrix oluştur.

#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <stdlib.h>

#define SATIR 4
#define SUTUN 5

void diziyi_yazdir(size_t satir, size_t sutun, const int dizi[satir][sutun]);

int main(){

	srand(time(NULL));

	int dizi[SATIR][SUTUN] ={{10,768,56,34,23},
							{34,23,2,3,4},
							{56,76,6,78,89},
							{-5,-15,65,-56,5}};
	int i,j = 0;
	int dizi2[SATIR][SUTUN];

	for(;i<SATIR;i++){
		for(;j<SUTUN;j++){
			dizi2[i][j]=1+rand()%10;
		}
	}

	diziyi_yazdir(SATIR,SUTUN,dizi);
	puts("-\n-");
	diziyi_yazdir(SATIR,SUTUN,dizi2);

	return 0;
}


void diziyi_yazdir(size_t satir, size_t sutun, const int dizi[satir][sutun]){
	size_t i,j;

	for(j=0;j<sutun;j++){
		printf("%6d",j);
	} 
	puts("\n");

	for(i=0;i<satir;i++){
		printf("%6d \n",i );
		for(j=0;j<sutun;j++){
			printf("%6d\t",dizi[i][j]);
		}
		puts(" ");
	}
	puts("");

}
