#include <stdio.h>
int main() {
	int x,y;

	printf("İlk sayıyı girin:\n");
	scanf("%d",&x);
	
	printf("İkinci sayıyı girin\n");
	scanf("%d",&y);

	printf("Sayı toplamları %d\n", x+y );

	int q,w;
	printf("2 Sayı giriniz\n");
	scanf("%d %d",&q,&w);
	printf("%d\n", q*w );


	return 0;
}