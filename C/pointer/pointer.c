#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void kareal(int* a);

int main(){
	int* sayi;
	char* karakt;
	float* kyıldız;

	//sayi = 0; //bir yeri göstermeyeceğini söyler.
	//kyıldız = NULL; //aynı şeydir.
	
	int a = 5;
	char b = 'a';
	float c = 45.24;
	/*
	sayi = &a;
	karakt = &b;
	kyıldız = &c;
	/*
	printf("a:%p, sayi:%p \n",&a,sayi);
	printf("b:%p, karakt:%p \n",&b,karakt);
	printf("c:%p, kyildiz:%p \n",&c,kyıldız);

	printf("a:%d, sayi:%d \n",a,*sayi);
	printf("b:%c, karakt:%c \n",b,*karakt);
	printf("c:%f, kyildiz:%f \n",c,*kyıldız);
	*/
	/*
	scanf("%d",&a); // adresni gösteririsek değişken değiştirebilir adres göndermek de pointerla olur. adres = pointer
	kareal(&a);
	printf("%d\n",a );
	*/

	char bal[100]; //diziler aslıda bir pointerdır ve ilk elemanı işret eder
	scanf ("%s",bal);
	printf("%s\n",bal);



	return 0;
}

void kareal(int* a){
	(*a) = (*a) * (*a);
}