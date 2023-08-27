#include <stdio.h>
int main()
{
	int seçenek;
	int sayı1,sayı2;

	 printf("Aptallar için hesap makinesi\n");
	 printf("1->Toplama 2->Çıkarma 3->Çarpma 4->Bölme\n");
	 scanf("%d",&seçenek);
	 printf("Sayıları giriniz(2 TANE)\n");
	 scanf("%d %d",&sayı1,&sayı2);

	 switch(seçenek)
	 {
	 	case 1:
	 		printf("Toplamları %d",sayı1+sayı2);
	 		break;
	 	case 2:
	 		printf("Farkları %d\n", sayı1-sayı2);
	 		break;
	 	case 3:
	 		printf("Çarpımları %d\n",sayı1*sayı2);
	 		break;
	 	case 4:
	 		printf("Bölümleri %d\n",sayı1/sayı2);
	 		break;
	 	default:
	 		printf("Geçerli şeyleri yapınız\n");
	 		break;
	 }

return 0;

}
