#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int  main(){
	int i;
	int sayilar[10] = {1,2,3,4,5,6,7,8,9,0};
	for (i=0; i<10; i++){
		printf("%d\n",sayilar[i] );
	}
	puts("");

	int* apointer;

/*	apointer = sayilar;
	printf("%p : %d \n",apointer,*apointer);
	apointer = &sayilar[0];
	printf("%p : %d \n", apointer,*apointer);
*/
	/*int *pointer = sayilar;
	printf("*(pointer): %d\n",*pointer);
	printf("*(++pointer): %d\n",*++pointer);
	printf("*(pointer++): %d\n",*pointer++);
	printf("*(pointer): %d\n",*pointer);
	printf("*(--pointer): %d\n",*--pointer);
	printf("*(pointer): %d\n",*pointer);

	//sayilar +=2; diziler const pointer dır değeri değişmez
	pointer +=2;
	printf("pointer +=2*(pointer): %d\n",*pointer);
	printf("*(++pointer): %d\n",*++pointer);
	printf("*(pointer++): %d\n",*pointer++);
	printf("*(pointer): %d\n",*pointer);
	printf("*(--pointer): %d\n",*--pointer);
	printf("*(pointer): %d\n",*pointer);
	puts(" ");
	printf("*(pointer): %d\n",*pointer);
	printf("*(++pointer+1): %d\n",*(pointer+1));
	printf("*(pointer): %d\n",*pointer);
	printf("*(pointer+2): %d\n",*(pointer+2));
*/

	int *dpointer=sayilar;
	for (int i=0; i<10; i++){
		printf("ilk hali\n");
		printf("%d\n", *dpointer );
		*dpointer +=5;
		printf("%d\n", *dpointer );
		printf("Son hali\n");
		dpointer++;


	}

	return 0;
}