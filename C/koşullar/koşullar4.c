#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
	int sınav_n;
	printf("Sınav notunuzu giriniz\n");
	scanf("%d" , &sınav_n);

	if(sınav_n >=95)
	{
		puts("AA");
	}
	else if (sınav_n >=80)
	{
		puts("BB");
	}
	else if (sınav_n >=55)
	{
		puts("CC");
	}
	else 
	{
		puts("FF");
	}
}