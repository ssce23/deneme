#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void statikdizi();
void normaldizi();

int faktoriyel(int x);

int main(){
	statikdizi();
	statikdizi();
	puts (" ");
	normaldizi();
	normaldizi();

	return 0;


}
int faktoriyel(int x){
	int sonuc = 1;
	for (;x>1;x--){
		sonuc*=x;
	}
	return sonuc;
}

void statikdizi(){
	static int dizi1[5]={0};
	int i;

	puts("STATIK DIZI -> BASLANGIC");
	for (i=0;i<5;i++){
		printf("dizi1[%d]: %d\n",i,dizi1[i] );
	}
	puts(" ");

	puts("STATIK DIZI->CIKIS");
	for (i=0;i<5;i++){
		dizi1[i] += faktoriyel(i)*3;
		printf("dizi1[%d]: %d\n",i,dizi1[i]);
	}	

}

void normaldizi(){
	int dizi2[5]={0};
	int i;

	puts("NORMAL DIZI -> BASLANGIC");
	for (i=0;i<5;i++){
		printf("dizi2[%d]: %d\n",i,dizi2[i] );
	}
	puts(" ");

	puts("NORMAL DIZI->CIKIS");
	for (i=0;i<5;i++){
		dizi2[i] += faktoriyel(i)*3;
		printf("dizi2[%d]: %d\n",i,dizi2[i]);
	}	

}