#include <iostream> //cin,cout,endl
#include <iomanip> //setw()'yu kullanmak icin eklenmis kutuphane.
#include <cmath> //matematiksel islemler icin eklenmis kutuphane.
#include <Windows.h> //sleep() fonksiyonun kullanilmasi icin eklenmistir.
#include <conio.h> //getchar() getline() fonksiyonlari icin eklenmis kutuphane.
#include<string.h> //string uzunlugunu bulan fonksiyon icin eklenmistir.
#include <ctime> //srand(time(0)) icin eklenmis kutuphane
#include <string> //string islemleri icin eklenmis kutuphane.


using namespace std;

//soru5 de kullanilan char dizisinin sabit boyutudur.
const int BOYUT = 50;

//parametreli fonksiyon parantezler içindeki ifade fonksiyonun içinde kullanýlabilir hale gelir (Soru6 da kullanilan fonksiyonlar).
void tamamenBuyuk(string kelime)
{
	cout << "Kelimemiz:" << kelime << endl;
	for (int i = 0; i <= kelime.length(); i++)
	{
		//ascii tablosu esas alinarak ifler olusturulmustur.
		if (kelime[i] >= 97 && kelime[i] <= 122)
		{
			kelime[i] = kelime[i] - 32;
		}
	}

	cout << "Kelimenin Yeni Hali: " << kelime << endl;
}
void tamamenKucuk(string kelime)
{
	cout << "Kelimemiz:" << kelime << endl;
	for (int i = 0; i <= kelime.length(); i++)
	{

		//kelimenin i nci elemanýnýn onluk tabanda karþýlýðý ascýý aralýðýna göre deðerlendirildi.
		//tip dönüþümüne gerek kalmadý c++ kendi kendine bu iþlemi halletti.
		if (kelime[i] >= 65 && kelime[i] <= 90)
		{
			kelime[i] = kelime[i] + 32;
		}
	}
	cout << "Kelimenin Yeni Hali:" << kelime << endl;
}
void buyukseKucukKucukseBuyuk(string kelime)
{
	cout << "Kelimemiz:" << kelime << endl;
	//buyukleri kucuk yaptýk.
	for (int i = 0; i <= kelime.length(); i++)
	{
		if (kelime[i] >= 65 && kelime[i] <= 90)
		{
			kelime[i] = kelime[i] + 32;
		}
		//kucukleri buyuk yaptýk.
		else if (kelime[i] >= 97 && kelime[i] <= 122)
		{
			kelime[i] = kelime[i] - 32;
		}
	}

	cout << "Kelimenin Yeni Hali:" << kelime << endl;
}
void ilkHarfBuyuk(string kelime)
{
	cout << "Kelimemiz:" << kelime << endl;
	if (kelime[0] >= 97 && kelime[0] <= 122)
	{
		kelime[0] = kelime[0] - 32;
	}
	cout << "Kelimenin Yeni Hali:" << kelime << endl;

}


void soru1()
{/*
		  *
		 * *
		*****
		*   *
		*   *

		**
		*  *
		*   *
		*  *
		**
				*/

				//yildiz karakteri kullanilarak setw() ve ifler yardýmýyla ekrana basilmistir.
	char yildiz = '*';

	for (int i = 0; i < 10; i++)
	{
		if (i == 0) {
			cout << setw(3) << yildiz << endl;
		}
		else if (i == 1)
		{
			cout << setw(2) << yildiz << setw(2) << yildiz << endl;
		}
		else if (i == 2)
		{
			cout << yildiz << yildiz << yildiz << yildiz << yildiz << endl;
		}
		else if (i == 3 || i == 4)
		{
			cout << yildiz << setw(4) << yildiz << endl;
		}
		else if (i == 5 || i == 9)
		{
			if (i == 5)
			{
				cout << endl;
				cout << endl;
			}
			cout << yildiz << yildiz << endl;
		}
		else if (i == 6 || i == 8)
		{
			cout << yildiz << setw(2) << yildiz << endl;
		}
		else if (i == 7)
		{
			cout << yildiz << setw(3) << yildiz << endl;
		}
		else {

		}

	}
}
void soru2()
{

	int sayi1 = 0, sayi2 = 0;
	int islem = 0, i = 0;
	char cevap = 'e';

	do
	{

		cout << " ##HESAP MAKINESINE HOSGELDINIZ## " << endl;

		cout << "[1]Toplama" << endl;
		cout << "[2]Cikarma" << endl;
		cout << "[3]Carpma" << endl;
		cout << "[4]Bolme" << endl;
		cout << "[5]Mod Alma" << endl;
		cout << "[6]Ust Alma" << endl;
		cout << "[7]Karekok Alma" << endl;
		cout << "Bir islem giriniz:";
		cin >> islem;
		cout << endl;
		//islem degiskenini kontrol eden switch case yapisi.
		switch (islem)
		{

		case 1:
			cout << "Iki sayi giriniz:" << endl;
			cin >> sayi1 >> sayi2;
			cout << sayi1 << "+" << sayi2 << "=" << sayi1 + sayi2 << endl;
			break;
		case 2:
			cout << "Iki sayi giriniz:" << endl;
			cin >> sayi1 >> sayi2;
			cout << sayi1 << "-" << sayi2 << "=" << sayi1 - sayi2 << endl;
			break;
		case 3:
			cout << "Iki sayi giriniz:" << endl;
			cin >> sayi1 >> sayi2;
			cout << sayi1 << "*" << sayi2 << "=" << sayi1 * sayi2 << endl;
			break;
		case 4:
			cout << "Iki sayi giriniz:" << endl;
			cin >> sayi1 >> sayi2;
			cout << sayi1 << "/" << sayi2 << "=" << sayi1 / sayi2 << endl;
			break;
		case 5:
			cout << "Iki sayi giriniz:" << endl;
			cin >> sayi1 >> sayi2;
			cout << sayi1 << "%" << sayi2 << "=" << sayi1 % sayi2 << endl;
			break;
		case 6:
			cout << "Bir sayi giriniz:";
			cin >> sayi1;
			cout << "Ussun derecesini giriniz:";
			cin >> sayi2;
			cout << sayi1 << "^" << sayi2 << "=" << pow(sayi1, sayi2) << endl;
			break;
		case 7:
			cout << "Bir sayi giriniz:";
			cin >> sayi1;
			cout << sayi1 << " Sayisinin Karekoku:" << sqrt(sayi1) << endl;
			break;
		default:
			cout << "Hatali giris yaptiniz..." << endl;
			break;

		}
		cout << " ##Yeniden denemek ister misiniz? (e/h) ## ";
		cin >> cevap;

		//kullanici hayir diyene kadar surekli hesaplama yapmamizi saglayacak switch case.
		switch (cevap)
		{
		case 'e':
			cout << "\nYeniden baslatiliyor...\n";
			Sleep(1000); //Consolu 1 saniye beklettik.
			break;
		case'E':
			cout << "\nYeniden baslatiliyor...\n";
			Sleep(1000);
			break;
		case 'h':
			cout << "\nCikis yapiliyor...\n";
			break;
		case'H':
			cout << "\nCikis yapiliyor...\n";
			break;
		default:
			//kullanicinin hatali giris yapmamasi saglandi.
			cout << "Hatali giris yaptiniz...";
			break;
		}

	} while (cevap == 'e' || cevap == 'E');

}
void soru3()
{

	cout << "INTEGRALI ALINACAK POLINOM : " << " x^2+2*x+5" << endl;
	cout << endl;
	cout << "INTEGRAL ALINACAK ARALIK : " << " [0-4] " << endl;
	cout << endl;

	//REIMANN TOPLAMI:
	//					       *29			Alt alan:			Üst alan:	***
	//	                     * *											***
	//			          *20* *					***					***	***
	//			       *  *  * *					***					***	***
	//              *13*  *  * *				***	***				***	***	***
	//           *  *  *  *  * *				***	***				***	***	***	
	//        *8 *	*  *  *  * *   ==> (	***	***	***		+	***	***	***	***	)/2	=  ÝNTEGRAL
	//    *5  *  *  *  *  *  * *        ***	***	***	***			***	***	***	***
	//    *   *  *  *  *  *  * *		***	***	***	***			***	***	***	***		
	//    *   *  *  *  *  *  * *		***	***	***	***			***	***	***	***	
	//    *   *  *  *  *  *  * *		***	***	***	***			***	***	***	***
	//    *0  *1 *  *2 *  *3 * *4		***	***	***	***			***	***	***	***

	int sayi = 0, sayi1 = 1, sayi2 = 2, sayi3 = 3, sayi4 = 4;  //x ekseninde gereken sayýlar
	int alanAlt1, alanAlt2, alanAlt3, alanAlt4;               //Alt alanlarýmýz
	int alanUst1, alanUst2, alanUst3, alanUst4;				   //Üst alanlarýmýz
	int hKucuk = 5, hKucuk1 = 8, hKucuk2 = 13, hKucuk3 = 20;   //Alt alanýmýz için yükseklikler
	int hBuyuk = 8, hBuyuk1 = 13, hBuyuk2 = 20, hBuyuk3 = 29;  //Üst alanýmýz için yükseklikler

	//Alt alan hesaplarý
	alanAlt1 = (sayi1 - sayi) * hKucuk;
	alanAlt2 = (sayi2 - sayi1) * hKucuk1;
	alanAlt3 = (sayi3 - sayi2) * hKucuk2;
	alanAlt4 = (sayi4 - sayi3) * hKucuk3;

	//Üst alan hesaplarý
	alanUst1 = (sayi1 - sayi) * hBuyuk;
	alanUst2 = (sayi2 - sayi1) * hBuyuk1;
	alanUst3 = (sayi3 - sayi2) * hBuyuk2;
	alanUst4 = (sayi4 - sayi3) * hBuyuk3;

	//Reimann toplamýndan integral hesabýmýz
	int alanAltToplam = alanAlt1 + alanAlt2 + alanAlt3 + alanAlt4;
	int alanUstToplam = alanUst1 + alanUst2 + alanUst3 + alanUst4;
	float integral = (alanUstToplam + alanAltToplam) / 2;

	cout << "x^2+2*x+5" << " INTEGRALININ [0-4] ARALIGINDA SONUCU : " << alanAltToplam << " ile" << "\t " << alanUstToplam << " arasinda bir degerdir..." << endl;
	cout << endl;
	cout << "x^2+2*x+5" << " INTEGRALININ [0-4] ARALIGINDA YAKLASIK OLARAK SONUCU : " << integral << " 'dir..." << endl;
	//Reimann toplamý integralimizin yaklaþýk deðerini bulacak.
}
void soru4() {
	//10 elemanli sayi dizisi.
	int SayiDizi[10];
	//dizinin elemanlarini kýyaslamak icin olusturulmus kontrol yapicak degisken.
	int enBuyuk = 0;

	for (int i = 0; i < 10; i++) {
		//0 ile 2000 arasinda degerler ureten random.
		SayiDizi[i] = rand() % 2001;
	}


	//dizinin elemanlarini birbiriyle kiyaslayan for dongusu.
	for (int i = 0; i < 10; i++) {
		if (SayiDizi[i] > enBuyuk) {
			enBuyuk = SayiDizi[i];
		}
	}

	//Ekrana sayilar yazdirilmistir.
	cout << "Sayilarimiz:";
	for (int i = 0; i < 10; i++) {
		cout << SayiDizi[i] << " ";
	}
	cout << endl;
	//Ekrana en buyuk sayi yazdirilmistir.
	cout << "Sayilarimizin En Buyuk Elemani:" << enBuyuk << endl;
}

void soru5()
{
	//sabit boyutlu char dizisi.
	char kelime[BOYUT];

	int harfSayisi;

	//kelimeyi terse cevirmekte bize yardimci olucak degisken.
	char aynaModu;

	//daha onceden kullanilmis get,getchar,getline gibi fonksiyonlarin görmezden gelinmesini saglar.
	//kullanilmadigi taktirde hata alinmaktadir.(Kaynakça:http://cplusplus.com/forum/beginner/32257/) sorular tek dosyada olmadan önce bu hatayý vermemektedir.
	cin.ignore();
	cout << " Bir kelime/cumle yazin (En fazla 50 karakter):";
	cin.get(kelime, 50);                        //Boþluk içeren birkaç kelimeyi okumak için kullandýk.

	cout << "Yazdiginiz kelime/cumle : " << kelime << endl;

	harfSayisi = strlen(kelime);                //Kelimedeki karakter sayýsý
	for (int i = 0; i < harfSayisi / 2; i++)    //Kelimenin ortasýndaki elemana kadar gerçekleþir.
	{
		aynaModu = kelime[i];
		kelime[i] = kelime[harfSayisi - 1 - i];
		kelime[harfSayisi - 1 - i] = aynaModu;
	}

	cout << "Yazdiginiz kelimenin/cumlenin tersi: " << kelime << endl;
}
void soru6() {

	string kelimeSoru6;
	char kullaniciMenuSecim;

	cout << "Klavyeden lutfen bir cumle giriniz:";

	//Onceki getline get getchar fonksiyonlarýný uyutur.
	cin.ignore();
	getline(cin, kelimeSoru6);

	//Soruda istenen menu.
	cout << "Cumleye Yapmak Istedýgýnýz Islemi Seciniz:" << endl;
	cout << "a.Tamamen Buyuk Yap" << endl;
	cout << "b.Tamamen Kucuk Yap" << endl;
	cout << "c.Buyukse Kucuk Kucukse Buyuk Yap" << endl;
	cout << "d.Kelimelerin Ilk Harfini Buyuge Cevir" << endl;
	cout << "Seciminiz:";


	//char karakteri okumak icin kullanilan fonksiyon kullanici 1 karakterden fazla giremez.
	kullaniciMenuSecim = getchar();



	cout << endl;

	if (kullaniciMenuSecim == 'a' || kullaniciMenuSecim == 'A') {
		tamamenBuyuk(kelimeSoru6);
	}
	else if (kullaniciMenuSecim == 'b' || kullaniciMenuSecim == 'B') {
		tamamenKucuk(kelimeSoru6);
	}
	else if (kullaniciMenuSecim == 'c' || kullaniciMenuSecim == 'C') {
		buyukseKucukKucukseBuyuk(kelimeSoru6);
	}
	else if (kullaniciMenuSecim == 'd' || kullaniciMenuSecim == 'D') {
		ilkHarfBuyuk(kelimeSoru6);
	}
	else {
		cout << "Hatali secim yaptiniz!" << endl;
	}

}

void soru7() {
	char kullaniciKarakter;
	int calismaSayisi = 0;

	do {
		//do while ilk seferinde kosula bakmaksizin calisir bundan dolayi ilk calýsmasý anýnda özel olarak calisacak kisim.
		if (calismaSayisi == 0) {

			int bolenSayisi = 0;

			//1 ile sonsuz arasinda rastgele sayilar uretilmistir.
			int sayi = rand() + 1;
			cout << "Uretilen Sayi:" << sayi << endl;

			for (int i = 1; i <= sayi; i++)
			{
				if (sayi % i == 0)
					bolenSayisi++;
			}

			if (sayi == 1) {
				cout << sayi << " Asal degildir." << endl;
			}
			else if (bolenSayisi <= 2)
			{
				cout << sayi << " Asaldir." << endl;
			}
			else
			{
				cout << sayi << " Asal degildir." << endl;
			}
			calismaSayisi++;
		}


		cout << "Devam Etmek Istemiyorsaniz Bir Noktalama Isareti Giriniz Devam Etmek Istiyorsaniz[Q] Harfine Basiniz:";
		cin.ignore();
		kullaniciKarakter = getchar();

		//noktalama isaretleri girildiginde programdan cikilmasi saglanir.
		if (kullaniciKarakter == ';' || kullaniciKarakter == '.' || kullaniciKarakter == '!' || kullaniciKarakter == '?' || kullaniciKarakter == ',') {
			cout << "Programdan Cikiliyor" << endl;
			//dongu break yardimiyla durdurulmustur.
			break;
		}

		//kullanici devam etmek istediginde klavyeden q veya Q harflerini girmelidir.
		else if (kullaniciKarakter == 'q' || kullaniciKarakter == 'Q') {

			int bolenSayisi = 0;

			//1 ile sonsuz arasinda rastgele sayilar uretilmistir.
			int sayi = rand() + 1;

			cout << "Uretilen Sayi:" << sayi << endl;
			for (int i = 1; i <= sayi; i++)
			{
				if (sayi % i == 0)
					bolenSayisi++;
			}

			if (sayi == 1) {
				cout << sayi << " Asal degildir." << endl;
			}
			else if (bolenSayisi <= 2)
			{
				cout << sayi << " Asaldir." << endl;
			}
			else
			{
				cout << sayi << " Asal degildir." << endl;
			}
		}






	} while (true);
}
void soru8() {

	string kelime;
	int kelimeUzunlugu = 0;
	cout << "Kelimeyi giriniz:";
	cin >> kelime;

	//Kaynakca:https://www.geeksforgeeks.org/g-fact-40-foreach-in-c-and-java/
	/* karakter degiskeni sýra sýra kelimenin icindeki harflerin degerine esit olur
	eðer bu islem surecinde kelimeuzunlgunu arttirirsak kelime uzunlugunu bulmus oluruz.*/
	for (char karakter : kelime)
	{
		kelimeUzunlugu++;
	}

	//Kelime uzunlugu ekrana bastirilmistir.
	cout << "Kelime Uzunlugu:" << kelimeUzunlugu << endl;
}
void soru9() {

	//ingiliz alfabesi bir stringe atanmistir.
	string alfabe = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//kelimelerin ilk harfini olusturucak A harfi stringe atanmistir.
	string metin = "A";
	//20 kelime olusturulmasi icin boyutu 20 olan dizi olusturulmustur.
	string kelimeler[20];


	//alfabe dizisinden rastgele secilen elemanlar(rand yardimiyla) kelimeler dizisine aktarilmistir.
	//ve bu diziler ekrana bastirilmistir.
	for (int j = 0; j < 20; j++) {
		int uzunluk = (rand() % 10) + 1;
		for (int i = 0; i < uzunluk; i++) {
			int harfRandom = rand() % 53;
			//atama islemi birbirinin üzerine toplayarak yapilmistir.
			//örneðin Metin baslangýcta A idi random olarak b harfi geldigini dusunursek yeni metin Ab olur.
			metin = metin + alfabe[harfRandom];
		}
		kelimeler[j] = metin;
		metin = "A";
		cout << j + 1 << ". Kelime:" << kelimeler[j] << endl;
	}
}
void soru10() {

	//olusacak ascii karakterleri tutucak olan string.
	string asciiKarakterler = "";
	int kelimeSayisi;
	//Buyuk Harfler(asal olanlari) Karakter Katarýmýza Eklendi.
	for (int i = 65; i <= 90; i++) {
		int bolenSayisi = 0;

		//bolen sayisini bulan dongu
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				bolenSayisi++;
			}
		}

		if (bolenSayisi <= 2) {
			//Birbirinin üzerine toplanma þekli örneklenmistir(soru9 da oldugu gibi.)
			//ABC              //AB                 //C
			asciiKarakterler = asciiKarakterler + char(i);
		}

	}

	//Kucuk Harfler(Asal olanlari) Karakter Katarýmýza Eklendi.
	for (int i = 97; i <= 122; i++) {
		int bolenSayisi = 0;

		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				bolenSayisi++;
			}
		}

		if (bolenSayisi <= 2) {
			asciiKarakterler = asciiKarakterler + char(i);
		}

	}

	//Kullanicidan kac kelime olusturmak istedigi istenmistir.
	cout << "Lutfen Kac Kelime Olusturmak Istediginizi Giriniz:";
	cin >> kelimeSayisi;


	for (int i = 0; i < kelimeSayisi; i++) {

		cout << i + 1 << ".Kelime:";
		for (int j = 0; j < 3; j++) {
			//random olarak ascii karakterler secilmistir.
			/*asciiKarakter.length-1 ifadesinde yapilmak istenen stringin uzunludgunu
			 bulup stringden rastgele olarak eleman secmektir.Uretilen random deðerler bu ifade
			 sayesinde stringin boyutlarýnda olmustur.
			 */
			cout << asciiKarakterler[rand() % (asciiKarakterler.length() - 1)];
		}
		cout << endl;
	}
}



int main()
{

	//srand fonksiyonun main fonksiyonu içinde çaðýrýlmasý gerekiyor aþaðýdaki bütün fonksiyonlarý etkiliyor.
	srand(time(0));

	//Istenilen cýktý sekli saglanmistir.Fonksiyonlar sayesinde tek tek cagirilmistir.
	cout << endl << "Cevap 1: " << endl;
	soru1();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 2: " << endl;
	soru2();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 3:" << endl;
	soru3();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 4: " << endl;
	soru4();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 5: " << endl;
	soru5();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 6: " << endl;
	soru6();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 7: " << endl;
	soru7();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 8: " << endl;
	soru8();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 9: " << endl;
	soru9();
	cout << endl << "--------------------------------------" << endl;
	cout << endl << "Cevap 10: " << endl;
	soru10();
	cout << endl << "--------------------------------------" << endl;

	system("PAUSE");
	return 0;
}
