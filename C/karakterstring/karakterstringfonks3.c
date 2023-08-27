#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	//int getchar() terminladen karakter okur.
	char c; //direkt char her zaman tekildir
/*	puts("girdi ver\n");
	c = getchar();
	printf("char == %c\n",c);
*/	

	int a;
	printf("tahmini karakter sayisi giriniz\n");
	scanf("%d\n",&a);
	char cumle[a];
	int i=0;
	while (i<a-1 && (c=getchar()) != '\n'){ //niye \n?
		cumle[i++] = c;
	}
	cumle[i]="\0"; // stringin sonunda her zaman olmak zorunda 
	puts(cumle);
	//karakter okuyacak
	return 0;
}