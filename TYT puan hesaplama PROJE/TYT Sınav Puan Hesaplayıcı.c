#include <stdio.h>
#include <stdlib.h>
#define tu 3.3
#define ma 3.3
#define so 3.4
#define fe 3.4

int main() {
	
	system("color f");
	printf("\n			TYT PUAN HESAPLAMA\n\n");
	printf("Turkce'de 40 soru\nMatematik'te 40 soru\nSosyal'de 20 soru\nFen'de 20 soru bulunmaktadir.\n\n");
	int turkcedogru,turkceyanlis,matdogru,matyanlis,sosdogru,sosyanlis,fendogru,fenyanlis,ekleme;
	float obp;
	double turkcenet,matnet,sosnet,fennet,obppuan;
	double tytpuan;
	
	printf("Turkce dogru sayinizi giriniz : "); // T�rk�e do�ru ve Yanl�� Say�lar�n� Kullan�c�dan �stiyoruz
	scanf("%d",&turkcedogru);
	printf("Turkce yanlis sayinizi giriniz : ");
	scanf("%d",&turkceyanlis);
	if(turkcedogru>40 || turkcedogru<0) // Do�ru veya Yanl�� Say�s� 40'tan Fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n"); 
		exit(turkcedogru);
	}
	else if(turkceyanlis>40 || turkceyanlis<0) // Do�ru veya Yanl�� Say�s� 0'dan Az ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	if(turkcedogru+turkceyanlis>40) // Do�ru ve Yanl�� Say�lar�n�n Toplam� 40 tan fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\n\nDogru ve yanlis sayilarini tekrar kontrol ediniz.Puaniniz HATALI hesaplanacak!!!\n\n");
	}
	
	
	printf("\nMatematik dogru sayinizi giriniz : "); // Matematik do�ru ve Yanl�� Say�lar�n� Kullan�c�dan �stiyoruz
	scanf("%d",&matdogru);
	printf("Matematik yanlis sayinizi giriniz : ");
	scanf("%d",&matyanlis);
	if(matdogru>40 || matyanlis>40) // Do�ru veya Yanl�� Say�s� 40'tan Fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	else if(matdogru<0 || matyanlis<0) // Do�ru veya Yanl�� Say�s� 0'dan Az ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	if(matdogru+matyanlis>40) // Do�ru ve Yanl�� Say�lar�n�n Toplam� 40 tan fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\n\nDogru ve yanlis sayilarini tekrar kontrol ediniz.Puaniniz HATALI hesaplanacak!!!\n\n");
	}
	
	
	printf("\nSosyal dogru sayinizi giriniz : "); // Sosyal do�ru ve Yanl�� Say�lar�n� Kullan�c�dan �stiyoruz
	scanf("%d",&sosdogru);
	printf("Sosyal yanlis sayinizi giriniz : ");
	scanf("%d",&sosyanlis);
	if(sosdogru>20 || sosyanlis>20) // Do�ru veya Yanl�� Say�s� 40'den Fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	else if(sosdogru<0 || sosyanlis<0) // Do�ru veya Yanl�� Say�s� 0'dan Az ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	if(sosdogru+sosyanlis>20) // Do�ru ve Yanl�� Say�lar�n�n Toplam� 20'den fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\n\nDogru ve yanlis sayilarini tekrar kontrol ediniz.Puaniniz HATALI hesaplanacak!!!\n\n");
	}
	
	
	printf("\nFen dogru sayinizi giriniz : "); // Fen do�ru ve Yanl�� Say�lar�n� Kullan�c�dan �stiyoruz
	scanf("%d",&fendogru);
	printf("Fen yanlis sayinizi giriniz : ");
	scanf("%d",&fenyanlis);
	if(fendogru>20 || fenyanlis>20) // Do�ru veya Yanl�� Say�s� 20'den Fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	else if(fendogru<0 || fenyanlis<0) // Do�ru veya Yanl�� Say�s� 0'dan Az ise Hata verecektir.
	{
		system("color 4");
		printf("\nHatali sayi girildi.PUAN YANLIS HESAPLANACAK!!!\n\n");
	}
	if(fendogru+fenyanlis>20) // Do�ru ve Yanl�� Say�lar�n�n Toplam� 20'den fazla ise Hata verecektir.
	{
		system("color 4");
		printf("\n\nDogru ve yanlis sayilarini tekrar kontrol ediniz.Puaniniz HATALI hesaplanacak!!!\n\n");
	}
	
	printf("\n________________________________ NETLERiNiZ ____________________________________________________________\n");
	// Bu K�s�m 4 Yanl�� 1 do�ruyu G�t�rmesi ��in Yaz�lan Form�llerden Olu�uyor.
	// Ve Hesapland�ktan Sonra Netlerin Kullan�c�ya G�sterilmesi...
	turkcenet=turkcedogru-turkceyanlis*0.25; 
	printf("\nTurkce netiniz : %.2lf",turkcenet);
	
    matnet=matdogru-matyanlis*0.25;
	printf("\nMatematik netiniz : %.2lf",matnet);

	sosnet=sosdogru-sosyanlis*0.25;
	printf("\nSosyal netiniz : %.2lf",sosnet);
	
	fennet=fendogru-fenyanlis*0.25;
	printf("\nFen netiniz : %.2lf",fennet);
	printf("\n________________________________________________________________________________________________________");
	// OBP Puan� Eklenmesi(1) / Eklenmemesi(2) ��in Kullan�c�ya Soru Soruyoruz
	printf("\n\nDaha once bir ogretim programina yerlesmediyseniz 1'e / Yerlestiyseniz 2'ye basiniz... : ");
	scanf("%d",&ekleme);
	if(ekleme!=1 && ekleme!=2) // Kulan�c� 1 Ve 2 D���nda De�er Girerse Hata alacakt�r.
	{
		system("color 4");
		printf("\nHatali deger girildi.PUAN YANLIS HESAPLANACAK!!!\n");
	}
	else if(ekleme==1)
	{
		printf("\nOBP notunuzu giriniz : "); // Kullan�c�dan OBP Notunu �stiyoruz.
	    scanf("%f",&obp);
	    if(obp>100)
	    {
	    	system("color 4");
	    	printf("\nOBP 100 den buyuk olamaz.PUAN HATALIDIR!\n");
		}
		else if(obp<0)
		{
			system("color 4");
			printf("\nOBP 0 dan kucuk olamaz.PUAN HATALIDIR!\n");
		}
	    obppuan=0.60*obp;
	    
	    tytpuan=turkcenet*tu+matnet*ma+sosnet*so+fennet*fe+obppuan+100; // KULLANICININ OBP EKLENM�� TYT PUANI.
	    
	}
	else if(ekleme==2)
	{
		tytpuan=turkcenet*tu+matnet*ma+sosnet*so+fennet*fe+100; // KULLANICININ OBP EKLENMEM�� TYT PUANI.
	}
	
	printf("\n\nTYT puaniniz : %lf\n\n",tytpuan);
	if(tytpuan<150) // Kullan�c� 150 Baraj Puan�n� Ge�ip Ge�medi�i Kontrol Ediliyor.
	{
		system("color 4");
		printf("\nMaalesef 150 baraj puanini gecemediniz!!!\n\n\n"); 
	}
	
	return 0;
}
