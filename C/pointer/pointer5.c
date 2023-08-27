#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

#define BOYUT 50

void bubblesort(int dizi[], const size_t boyut, int (*karsilastir)(const int* const a, const int* const b));
int azalan(const int* const a, const int* const b);
int artan(const int* const a, const int* const b);
void yazdir(const int dizi[], const size_t boyut);
void yerdegistir(int* ptr1,int* ptr2);

int main(){
	int dizi[BOYUT];
	int i = 0;
	int x;
	srand(time(NULL));
	size_t boyut = BOYUT;
	for (; i<boyut;i++){
		dizi[i]=1+rand()%1000;
	}
	yazdir(dizi,boyut);

	while(x!=-1){	// neden 2 kere girmen lazım?
		
		printf("Artan(1) mi Azalan(2) mi siralansin?\n");
		scanf("%d\n",&x);
		if (x==1){
			bubblesort(dizi,boyut,artan);
		}
		else if(x==2){
			bubblesort(dizi,boyut,azalan);
		}
		else if(x==-1){
			break;
		}
		else{
			printf("Düzgün gireydin.\n");
		}
		yazdir(dizi,boyut);
	}

	return 0;
}

void bubblesort(int dizi[], const size_t boyut, int (*karsilastir)( const int* const a, const int* const b)){
	
	for (int i=0; i<boyut; i++){
		for(int j=0; j<boyut-1; j++){
			if ((*karsilastir)(&dizi[i],&dizi[j])){
				yerdegistir(&dizi[i],&dizi[j]);
			}
		}
	}
}

int azalan(const int* const a, const int* const b){
	return *a>*b;
}
int artan(const int* const a, const int* const b){
	return *a<*b;
}

void yerdegistir(int* ptr1,int* ptr2){
	int gecici;
	gecici = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = gecici;
}

void yazdir(const int dizi[], const size_t boyut){
	size_t i;
	for (i=0; i<boyut; i++){
		printf("dizi[%d]=%d \t ",i, dizi[i]);
	}
	puts("\n");
}