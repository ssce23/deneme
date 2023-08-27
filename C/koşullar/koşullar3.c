#include <stdio.h>
#include <stdlib.h>
#include <float.h>


int main()
{
	int akls = 60;
	int tahmin ;
	printf("Sayı gir\n");
	scanf("%d",&tahmin);

	if(tahmin > 60)
	{
		printf("Yüksek söyledin\n");
	}
	else if (tahmin == 60)
	{
		printf("Doğru söyledin\n");
	}
	else
	{
		printf("Az söyledin\n");
	}
}
