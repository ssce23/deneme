#include <stdio.h>
#include <stddef.h>
#include <time.h>
#include <stdlib.h>

void yazdir1(size_t boyut, const int dizi[]){
	size_t i;

	for(i=0;i<boyut;i++){
        printf("%6d\t",i);
    }
    puts("");
	for(i=0;i<boyut;i++){
		printf("%6d\t",dizi[i]);
	}
	puts("\n");
}

void yazdirsatırsutun(size_t satir, size_t sutun, const int dizi[satir][sutun]){
	size_t i,j;

	for(j=0;j<sutun;j++){
		printf("\t%6d",j);
	} 
	puts("");

	for(i=0;i<satir;i++){
		printf("%6d",i);
		for(j=0;j<sutun;j++){
			printf(" %6d\t",dizi[i][j]);
		}
		puts("");
	}
	puts("");
}

int main(){
	size_t boyut;
	printf("Boyut sayisi girin:\n");
	scanf("%zu",&boyut);

	size_t satir;
	printf("Satir gir\n");
	scanf("%zu",&satir);
	
	size_t sutun;
	printf("Sutun gir\n");
	scanf("%zu",&sutun);

	int Boyut[boyut]; // alınan boyut kadar yer ayır
	int satırsutun[satir][sutun]; // alınan satır ve sutun kadar yer ayır
	size_t i,j;

	for(i=0;i<boyut;i++){
		Boyut[i] = 3*i +5;
	}

	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			satırsutun[i][j] = 2*i + 5*j -7;
		}
	}

	yazdir1(boyut,Boyut);
	yazdirsatırsutun(satir,sutun,satırsutun);
	
	return 0;
}
