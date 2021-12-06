# **C++ PROGRAMMING**
&nbsp;&nbsp;&nbsp;
C++, C üzerinden geliştirilmiş bellek yönetim imkanı veren orta seviyeli bir progrmalama dilidir. C den farklı olarak OOP _(object oriented programing)_ imkanı sağlayan bir dildir.

## **İçerik:**
* [Değişkenler](#Degiskenler-_(Variables)_)
  * [Değişken Tipleri](#değişken-tipleri)
  * [Değişken Tanımlama & Değer Atama](#değişken-tanımlama--değer-atama)
* [İşlem/Operatörler](#Islemler/Operatorler)
  * [Matematiksel islemler](#Matematiksel-islemler)
  * [Mantıksal Operatörler](#Mantıksal-Operatörler)
  * [Logic Operatorleri](#Logic-Operatorleri)
* [Koşullar](#Koşullar)

# **Degiskenler _(Variables)_**
&nbsp;&nbsp;&nbsp;
Değişkenler içlerinde çeşitli veriler tutan yapılardır. Bir tip alırlar ve o tipteki verileri tutarlar.
## Değişken Tanımlama & Değer Atama
&nbsp;&nbsp;&nbsp;
Değişken tanımlarken ```<Degisken_ismi> <Degisken_adi>``` olarak tanımlarız. Değişken isimleri;
* Türkçe karakterler içermemeli
* Alfabetik karakter ile başlamalı, ortasında veya sonunda numerik karakter olabilir.
* '_', '-' içerebilir.
* Taşıdıkları değerle anlamlı değerler tutmalıdır.

'=' operatörü sağındaki değeri soluna aktarır.

**Ör**;
```cpp
char	cinsiyet = 'e';	//E, K
int		yaş = 20;		//20, 54, 12..
bool	durum = 1;		//1(sağ), 0(ölü)
```
## Değişken Tipleri

* char -> Karakter tutar.
	* char
		```c
		//1 Byte yer kaplar
		char a;		//min - max deger
		a = 'a';	//(-127 - 127) veya (0 - 255)
		```
	* unsigned char
		```c
		//1 Byte yer kaplar
		unsigned char a;		//min deger 0
		a = 'a';				//max deger 255
		```
	* signed char
		```c
		//1 Byte yer kaplar
		signed char a;		//min deger -127
		a = 'a';			//max deger 127
		```
* int(integer) -> Tam sayı değeri tutar.
	* int
		```c
		//4 Byte Yer kaplar
		long int a;	//min deger -2,147,483,648
		a = 5;		//max deger 2,147,483,647
		```
	* unsigned int
		```c
		//4 Byte Yer kaplar
		unsigned int a;	//min deger 0
		a = 5;			//max deger 4,294,967,295
		```
	* short int
		```c
		//2 Byte yer kaplar
		short int a;	//min deger 32,768
		a = 5;			//max deger 32,767
		```
	* unsigned short int
		```c
		//2 Byte yer kaplar
		unsigned short int a;	//min deger 0
		a = 5;					//max deger 65,535
		```
	* long int
		```c
		//8 Byte Yer kaplar
		long int a;	//min deger -2,147,483,648
		a = 5;		//max deger 2,147,483,647
		```
	* unsigned long int
		```c
		//8 Byte Yer kaplar
		unsigned long int a;	//min deger 0
		a = 5;					//max deger 4,294,967,295
		```
	* long long int
		```c
		//8 Byte yer Kaplar.
		long long int a;	//min deger -(2^63)
		a = 5;				//max deger (2^63)-1
		```
	* unsigned long long int
		```c
		//8 Byte yer Kaplar.
		unsigned long long int a;	//min deger 0
		a = 5;						//max deger 18,446,744,073,709,551,615
		```
* float(floating point) -> Ondalık sayıları tutar.
	* float
		```c
		//4 Byte yer Kaplar.
		float a;	//min deger -3.4 x 10^38
		a = 5.5;	//max deger 3.4 X 10^38
		```
	* double
		```c
		//8 Byte Yer Kaplar.
		double a;	//min deger -1.7 x 10^308
		a = 5.5;	//max deger 1.7 x 10^308
		```
# Islemler/Operatorler
* ## Matematiksel islemler
	|Operator| Kullanım Amacı|
	| :- | -: |
	| + | Toplama |
	| - | Çıkarma |
	| * | Çarpma |
	| / | Bölme |
	| % | Mod alma |

	Bütün bu operatörler '=' ile beraber kullanılabilir örnek olarak ```a += 5``` a'ya 5 ekler
* ## Mantıksal Operatörler
	Mantıksal öperatörler sonuc doğruysa 1(True), değilse 0(False) döndürürler.
	|Operator| Kullanım Amacı|
	| :- | -: |
	| == | Eşit mi? |
	| != | Eşit değil mi? |
	| < | Küçük mü? |
	| <= | Küçük veya eşit mi? |
	| > | Büyük mü? |
	| >= | Büyük veya eşit mi? |
* ## Logic Operatorleri
	Logic operatörleride mantıksal operatörler gibi sonuc doğruysa 1(True), değilse 0(False) döndürürler.
	|Operator| Kullanım Amacı|
	| :- | -: |
	| && | Logic ve |
	| \\\\ | Logic veya |
	| ! | değil |
# Koşullar


# Kaynak

* www.tutorialspoint.com/cplusplus/cpp_data_types.htm
* https://www.quora.com/What-is-the-range-of-float-and-double-data-type
