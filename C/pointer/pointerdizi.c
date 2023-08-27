#include <stdio.h>

int main(){
    int a[3] = {1,2,3};
	int *p = a;
	printf("temel eleman adresi %d\n", p );


    int (*x)[] = &a; // dizinin adresi temel adresi ile aynı mı?
    printf("temel eleman adresi %d\n", &a );
    printf("%d\n", p[2] );
    printf("temel eleman adresi %d\n", *x);
	// pointer bir dizinin temel adresini tutarken elemanla dizinin kalanına
	//erişebiliyorsak  (*x)[] mantığı nedir 
    printf("%d\n", **x );
    printf("%d\n", **x+1);

	return 0;
}