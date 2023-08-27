#include <stdio.h>
int main() {
	int x; //değişken oluşturduk int tipinde
	x = 5; // sayısal değer atadık

	printf("Oluşan x değikeni değeri %d\n",x );

	int y = 7;
	printf("Y değikeni ->%d\n", y );
	printf("Toplamları -> %d\n", x+y);

	int z = x+y;
	printf("Bu da z%d\n", z);
	return 0;

}