#include <stdio.h>

int main(){
	int i;
	int dizi1[10];
	for (i=0;i<10;i++){
		printf("dizi1[%d] = %d\n",i,dizi1[i]);
	}
	puts (" ");

	int dizi2[10];
	
	for (i=0;i<10;i++){	
		dizi2[i]=5;

	}
	for (i=0;i<10;i++){
		printf("dizi2[%d] = %d \n",i,dizi2[i]);
	}
	puts(" ");

	int dizi3[5]={5,6,7,-3,10};
	for (i=0;i<5;i++){
		printf("dizi3[%d] = %d\n",i,dizi3[i]);
	}
	puts(" ");

	int dizi4[5]={3,4};
	for (i=0;i<5;i++){
		printf("dizi4[%d] = %d\n",i,dizi4[i]);
	}
	puts(" ");


	char dizi5[6];
	for (i=0;i<5;i++){
		printf("dizi5[%d] = %c\n",i,dizi5[i]);
	}
	puts(" ");

	return 0;
}