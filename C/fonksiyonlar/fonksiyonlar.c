#include <stdio.h>

int karesinial(int x);  // ilk int değeri fonsiyonun verecei değerin int olacağını
						// içerdeki it değeri ise yerie koyulan parametrenin int olması
						// gerektiğini söyler

int main(){

	int sayi = 10;
	printf("%d\n", karesinial(sayi) );

	return 0;
}

int karesinial (int x){
	x *= x;
	return x;
} //pass by value bir fonksiyondur 
//yani x in değerini sayi nin değerini değiştirmez onu yeni bir değişknene atar 