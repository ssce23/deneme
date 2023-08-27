#include <stdio.h>

int main() {
	int a = 5;

	printf("a: %d\n",a);
	printf("a++: %d\n", a++); //burda önce stringi verir sonra 
							// a++ işlemini yapar

// ++ soldaysa önce arkadaki işlemi yapar
// sağdaysa pre move olarak o işlemi yapar

	printf("++a %d\n",++a );

	printf("a-- %d\n",a--);

	printf("--a %d\n",--a);



	return 0;
}