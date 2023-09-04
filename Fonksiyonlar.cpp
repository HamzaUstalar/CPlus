#include <iostream>
#include <string>

// FONKSİYONLAR
// FUNCTİONS

/*

// void değer döndürmez.
// void returns no value.
// value=değer.

void send () { 
    std::cout << "Hello Guys\n";
}
int main(){
    send ();
}

*/


/*
void hello (char msg,char xx) { // İki tane char tanımladım. Charı tek tanımladığım için tek bir harf yazabiliriz.
    std::cout << msg << " " << xx;
}
int main () {
    hello ('D','f'); // Burada da  tek kelimeleri çağırdık.
}
*/


/*
void message () {
    std::cout << "Merhabalar" << std::endl;
}
int collec (int number1, int number2) {
    int topla;
    topla = number1 + number2;
    message (); // Fonksiyondan fonksiyonu çağırabiliriz. Fakat fonksiyon içinde fonksiyon çalıştıramayız.
    return topla;
}
int main () {
    std::cout << collec (10, 20);
}
*/


/*
// İleriye Dönük Bildirim...
// Bildirim Ve Tanımlama
int topla (int number1, int number2); // Bildirim
int main () {
    std::cout << topla (100, 240) << std::endl;

}
int topla (int number1, int number2) { // Tanımlama
    int topla = number1 + number2;
    return topla;
}
*/


/*
int collect (int number1, int number2) {
    std::cout << "int==>";
    return number1 + number2;
}
double collect (double number1, double number2) {
    std::cout << "double==>";
    return number1 + number2;
}
int main () {
    std::cout << 5421212121214L << std::endl;
    std::cout << collect (10, 60) << std::endl; // int==>70
    std::cout << collect (10.02, 30.12) << std::endl; // double==>40.14
}
// collect(int,double) veya tam tersi kullanılamaz...
*/


/*
void print (std::string hello = "Merhabalar",int a = 10,bool bb= true ) {
    std::cout << hello << " " << a << std::endl;
}
int main () {
    print ("naber",30,true); // naber 30
    print ();           // hello 10
}
// Stringi tanımlarken std::string olarak tanımlamaya özen göster.
// When defining string,it is defined as std::string
// defining=tanımlayan defined=tanımlanmış as=olarak 
*/
//int topla (int a, int b) {
//    return a + b;
//}
//int islemyap (int x, int y, int(*callback)(int, int)) {
//    return callback (x, y);
//}
//int main () {
//    int sonuc = islemyap (10, 30, topla);
//    std::cout << "Sonuc==> " << sonuc << std::endl;
//    
//    return 0;
//}
//
//int main () {
//    int a = 50;
//    std::cout << *&a;
//}

// INLINE FUNCTION

//inline int topla (int a, int b) { // Normal fonksiyondan daha az işlevli olduğu için basit işlemlerde kullanılır.
//    return a + b;
//}
//int main () {
//    std::cout << topla (300 , 20);
//}
//



