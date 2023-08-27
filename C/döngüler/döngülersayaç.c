#include <stdio.h>

int main()
{
	int sayaç = 0;
	int öğrencisa = 15;
	int not;
	int toplamnot = 0;

	while (sayaç<öğrencisa)
	{
		scanf("%d",&not);
		sayaç = sayaç +1;
		toplamnot = toplamnot+not;
	}
	
	float ortalama = (float)toplamnot / (float) öğrencisa;
	printf("%d tane öğrencinin ortalaması %.3f\n", öğrencisa,ortalama);
	
	return 0;
}
