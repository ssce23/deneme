#include <stdio.h>

int main() {

	int sayaç = 0;
	int not;
	int topnot;

	printf("Not giriniz çıkmak için -1 giriniz\n");
	scanf ("%d",&not);

	while (not != -1){
		topnot = topnot + not;
		sayaç = sayaç + 1; 
		printf("Not giriniz çıkmak için -1 giriniz\n");
		scanf("%d",&not);

	}

	float ortalama = topnot / sayaç;
	printf("Ortalamamız %d ve öğrenci sayısı %d\n",ortalama,sayaç );


	return 0;
}