#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int kitap,sayi;
    float indirim1,indirim2,indirim3;
    kitap = 80 ;
    printf("Kitap sayisi: ");
    scanf("%d",&sayi);
    //indirim1 paranin %85 uzerinden degerlendirilir 
    indirim1=kitap*sayi*85/100;
    // indirim2 paranin %70 uzerinden degerlendirilir
    indirim2=kitap*sayi*70/100;
    // indirim3 paranin %60 uzerinden degerlendirilir
    indirim3=kitap*sayi*60/100;

    
    if (sayi<5)
    {
    	printf("Kitap sayisi: %d",sayi);
    	printf("\n");
    	printf("Odemesi gereken tutar: %f",indirim1);
	}
	if (sayi>=5 && sayi<10)
	{
		printf("Kitap Sayisi: %d",sayi);
		printf("\n");
		printf("Odemesi gereken tutar: %f",indirim2);
	}
	if (sayi>=10 && sayi<20)
	{
		printf("Kitap sayisi: %d",sayi);
		printf("\n");
		printf("Odemesi gereken tutar: %f",indirim3);
	}
	return 0;
}
