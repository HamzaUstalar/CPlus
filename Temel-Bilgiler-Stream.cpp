#include <iostream>
#include <iomanip>
#include <wchar.h>



// Learning English And Basic Information



// using namespace std;
// Büyük projelerde sorun yaratır. O yüzden std kullanımına alışkanlık haline getiriyorum...
// Creates problems in large projects
// Creates=Yaratır large=Büyük 


int main ()
{

    /*
    char d = 'J';
    std::cout << d << std::endl;
    return 0;

    //	Tek tırnak işaretine dikkat et.(Python'daki gibi çift tırnak kullanımı yok...)
    //	Watch out for the single quotation mark
    //	watch out=dikkat et single=tek for the=için
    */


    /*
    char x[] = "Merhaba";
    std::cout << x;

    //	Kelime tutmak istiyorsak çift tırnak kullanırız
    //  Use double quotation marks if we use words
    //	quotation=tırnak marks=işaretler use=kullanmak words=kelimeler
    */


    /*
    int x = -10;
    std::cout << x;

    //	Belirli bir boyutta sabit tutmak istiyorsak farklı int türlerine başvuru yaparız
    //	If we use a value of a specific size we try a different method
    //	value=Değer method=yöntem different=farklı specific=özel
    */


    /*
    double x{ 1231235234.12 };
    std::cout << std::setprecision(16);
    std::cout << x;

    //	std::setprecison ayarı hassasiyeti ayarlar. Yani satır sınırlandırmasını biz belirleriz
    //	we set the line delimitation
    //	line=hat delimitation=sınırlandırma we set the=ayarlıyoruz setprecison=hassasiyeti ayarla
    */


    /*
    bool a = false;
    std::cout << "Bu bizim kac byte alan kapladigini gosterir=> " << sizeof(a) << std::endl; // 1 byte
    std::cout << "Buda bize direkt a'yi dondurur=> " << a << std::endl;
    char x[] = "Merhaba";
    std::cout << sizeof(x) << std::endl; // 8 byte ==> 7 word + 1 empty
    char y[] = "Merhabalar";
    std::cout << sizeof(y) << std::endl; // 11 byte ==> 10 word + 1 empty
    char b[] = "";
    std::cout << sizeof(b) << std::endl; // 1 byte ==> 0 word + 1 empty*/


    /*
    const int x = 20;
    x = 10;
    std::cout << x;
    // const ile tanımladığımız zaman ifade değiştirilemeyen bir sabite dönüşür. Yani değişken olmaz.
    // Variables defined with const are constants
    // Variables=değişkenler defined=Tanımlanmış,tanımlanan const=Sabit
    */



    /*
    float x = 15.13f;
    std::cout << x << std::endl;
    std::cout << sizeof(double) << std::endl; // Double bellekte 8 byte'lık yer kaplar.
    std::cout << sizeof(float) << std::endl;  // Float bellekte 4 byte'lık yer kaplar.
    std::cout << sizeof(char) << std::endl;   // Char bellekte 1 byte'lık yer kaplar. Önceki dersimizde de görmüştük.
    std::cout << sizeof(const int);           // const int bellekte 4 byte'lık yer kaplar.
    */


    /*
    char a = 90;
    std::cout << static_cast<int>(a);
    # Normalde int ile tanımlayıp float türünden yazarsak bize hata vericektir.
    # static_cast<tür>(değişken) sayesinde hata mesajı almadan direkt çevirebiliriz.
    */


    /*
    char a = 30;
    std::cout << sizeof(static_cast<int>(a)); // char'ı int'e çevirdik. Bellekte 4 byte yer kapladı.
    */


    /*
    int a = 80;
    int x = 21;
    std::cout << a-- << std::endl; // 80 sonucunu döndürür.
    std::cout << a << std::endl;   // 79 sonucunu döndürür.
    std::cout << ++x << std::endl; // 22 sonucunu döndürür.
    std::cout << x << " " << a << std::endl; // 22 79 sonucunu döndürür. Operatörler ile yapılan işlemler kaydedildi tek kullanımlık değildi...
    std::cout << x-- << std::endl; // 22 sonucunu döndürür.
    std::cout << x << std::endl;   // 21 sonucunu döndürür.
                                   // Sonuç olarak işaretler sonda ise bir kere kendisini verir sonra yapılan işleme göre değişiklik göstererek verir.
    */


    /*
    OPERATÖRLER
    int x = 30;
    int y = 50;
    // x += y; 80
    // x -= y; -20 x'ten y'yi çıkardık.
    // x *= y; 1500
    // x /= y; 0 x'i y'ye böldük.
    // x %= 15; 0 x'in 15'e bölümünden kalanı x'e eşitledik.
    std::cout << x;
    */

    /*
    int a = 20; 
    std::cout << &a << std::endl; // a's position
    int* aPtr = &a;
    std::cout << *&*&a << std::endl;
    std::cout << aPtr << std::endl;  
    std::cout << *aPtr << std::endl; // 20
    std::cout << &*aPtr << std::endl;
    */
    
    


}



