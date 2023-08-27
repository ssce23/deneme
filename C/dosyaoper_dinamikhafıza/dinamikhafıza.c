#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// malloc() calloc() free() memset() void döner

void degerata(int* x, size_t size);
void yazdir(int* x, size_t size);

int main(){

	int a[100]; // 100 elemanlı bölge tuttu
	int boyut;
	scanf("%d",&boyut);
/*
	int* c = (int*) malloc(boyut * sizeof(int));
	printf("C dizisi\n");
	for (int i=0; i<boyut; i++){ // malloc ramde rastgele yer tutar ve değer atamazsak orda ne varsa yazar 
		printf("%d \t", c[i]);
	}	
	puts(" ");
	free(c);
*/
/*
	int* d = (int*) calloc(boyut,sizeof(int)); // calloc sırayla yer tutar o yüzden biraz daha yavaştır çünkü içini gezip 0 yazar
	for (int i=0; i<boyut; i++){
		printf("%d\t",d[i] );
	}
	free(d);
*/

	/*int* z = (int*) calloc(boyut,sizeof(int)); //0la başlatılmış dizi döner
	int* y = (int*) malloc(boyut*sizeof(int)); //
*/
	//memset(z,5,boyut*sizeof(int));  for ile aynı şeyi yapar değer koyar 
	//for (int i = 0; i<boyut; i++){
	//	z[i]=5;
	//}
	//printf("\n");

	int* f = (int*) calloc(20,sizeof(int));
/*	for (int i = 0; i<20; i++){
		f[i]=5;
		printf("%d\t", f[i] );
	}
	puts("\n");
*/	int* f_büyük = (int*) realloc(f,40); //arttırır
/*	for (int i = 0; i<40; i++){
		f_büyük[i]=5;
		printf("%d\t", f[i] );
	}
*/
	int* f_küçük = (int*) realloc(f,30); //azaltır
/*	for (int i = 0; i<30; i++){
		f_büyük[i]=5;
		printf("%d\t", f[i] );
	}
*/

	if (f_küçük!=NULL){ // yer ayıramayınca boşa düşerler c bunları NULL olarak tanımlatır NULL geçersiz ya da boş olduğunu gösterir
		printf("Uyarı\n");
	}

	free(f);
	free(f_büyük);
	free(f_küçük);

	return 0;
}