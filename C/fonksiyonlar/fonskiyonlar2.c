#include <stdio.h>

 int karesinial(int *x){
 	(*x) *= (*x);
 	return *x;
 }

int beşekle(int *x){
	(*x) += 5;
	return *x;
}

 int main(){
 	int sayi;

 	printf("Tam sayi giriniz\n");
 	scanf ("%d", &sayi);

 	printf("%d\n" ,karesinial(&sayi));
 	printf("%d\n" ,beşekle(&sayi)); // & sayının referansaarını gönderir
 	return 0;

 }
// burda da pass by reference olarak tanımladık
// *x bir pointerdır direkt kayıtlı argümanın pointini gönderir
// her *x yazıldığında o pointtki değer alınır 
 
