#include <stdio.h>

int x = 90;

void yerel1(){
	int x = 5;
	printf("Yerel1deki x'in i hali %d\n",x );
	x*=x;
	printf("Yerel1deki x'in son hali %d\n", x );
}

void yerelstatic(){
	static int x = 10;
	printf("Yerelstaticdeki ilk x %d\n", x);
	x++;
	printf("yerelstatic son x hali %d\n", x);
}

void globalcilik() {
	x-=45;
	printf("globalcilik x'i%d\n",x);
}

int main(){

	{
		int x = 1;
		printf("main içindeki scope x'i %d\n", x);
		x+=45;
		printf("main içinedki scope x'i son hali %d\n",x );
	}

	yerel1();
	yerelstatic();
	globalcilik();
	yerelstatic();
	yerelstatic();

	return 0;
}

