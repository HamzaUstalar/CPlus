#include <iostream>
#include <string>

int main () {
    /*int a = 0;
    int b = 0;
    char islem = '+';
    std::cout << "Birinci sayi=> "<<std::endl;
    std::cin >> a;
    std::cout << "Ikinci sayi " << std::endl;
    std::cin >> b;
    std::cout << "Islem giriniz" << std::endl;
    std::cin >> islem;*/

    // ||=> veya(or)
    // &&=> ve(and)
    /*if (a>10) {
        std::cout << "Sonuc" << a + b;
    }
    else if (a > 100) {
        std::cout << "else if Sonuc" << a + b;
    }

    else {
        std::cout << "Islem Yok";
    }*/

    /*switch (islem) {
        case '+':
            std::cout << "Sonuc:" << a + b;
            break;
        case '-':
            std::cout << "Sonuc" << a - b;
            break;
        case '/':
            std::cout << "Sonuc:" << a / b;
            break;
        case '*':
            std::cout << "Sonuc:" << a * b;
            break;
        default:
            std::cout << "Tanimlanmamis islem.";
    }
    std::cout << "\nBitti."; 
    */
    

    /*for (int i = 2; i < 11; i+=2)
    {
        std::cout << "Dongu=>" << i << std::endl;
    }*/

    /*int a = 0;
    while (true) {
        std::cout << "20 sayisini gir=>";
        std::cin >> a;
        if (a==20) 
        {
            std::cout << "Dongu sonlandi..";
            break;
        }
    }*/


    //Burası HATALI çalıştı bu yüzden tekrar buna dönücem.


    /*  int a = 0;
    int b = 0;
    std::string islem = " ";
    while (true) {
        std::cout << "\nBirinci Sayiyi Gir=>";
        std::cin >> a;
        std::cout << "Ikinci Sayiyi Gir=>";
        std::cin >> b;
        std::cout << "Yapmak Istediginiz Islemi seciniz==> Toplama(+),Cikarma(-),Bolme(/),Carpma(*)." << std::endl;
        std::cout << "Basa Sarmak Icin (e) Tuşuna Bas." << std::endl;
        std::cout<<"Cıkmak Icin (cikis) Yazınız."
        std::cin >> islem;
        if (islem == "e") {
            continue;
        }
        switch (islem) {
            case "+"  :
                std::cout << "Sonuc=>" << a + b;
                break;
            case "-":
                std::cout << "Sonuc=>" << a - b;
                break;
            case "/":
                std::cout << "Sonuc=>" << a / b;
                break;
            case "*":
                std::cout << "Sonuc=>" << a * b;
                break;
            default:
                std::cerr << "Hatali Islem Girdiniz. Tekrar Deneyin." << std::endl; // std::cerr==>incorrect entry 
                continue;
        }
    }*/

    int a = 0;
    int b = 0;
    char mat = ' ';
    char islem = ' ';
    char yeniden = ' ';
    while (true) {
        std::cout << "Birinci sayi=>";
        std::cin >> a;
        std::cout << "\n";
        std::cout << "Ikinci sayi=>";
        std::cin >> b;
    gecersiz:

        std::cout << "Cikmak isterseniz (c) tusuna basin." << std::endl;
        std::cout << "Devam etmek icin (d) tusuna basin." << std::endl;
        std::cout << "Basa donmek icin (b) tusuna basin." << std::endl;
        std::cout << "Yapmak istenilen islemi gir=>";
        std::cin >> islem;
        if (islem == 'c') {
            goto cıkıs;
        }
        else if (islem == 'd') {
            goto devam;
        }
        else if (islem == 'b') {
            continue;
        }
        else {
            std::cout << "Gecerli karakter giriniz..." << std::endl;
            goto gecersiz;
        }
    devam:

        std::cout << "Carpma(*),Cikarma(-),Toplama(+),Bolme(/)" << std::endl;
        std::cout << "Yapmak istenilen matematik islemini giriniz=>" ;
        std::cin >> mat;
        switch (mat) 
        {
            case '+':
                std::cout << "Sonuc=>" << a + b << std::endl;
                std::cout << "Program Yeniden Baslatiliyor..." << std::endl;
                break;
               
            case '-':
                std::cout << "Sonuc=>" << a - b << std::endl;
                std::cout << "Program Yeniden Baslatiliyor..." << std::endl;
                break;
            case '*':
                std::cout << "Sonuc=>" << a * b << std::endl;
                std::cout << "Program Yeniden Baslatiliyor..." << std::endl;
                break;
            case '/':
                std::cout << "Sonuc=>" << a / b << std::endl;
                std::cout << "Program Yeniden Baslatiliyor..." << std::endl;
                break;
            default:
                std::cout << "Gecerli matematik islemi giriniz..." << std::endl;
                std::cout << "Yeniden denemek icin (y) tusuna basiniz." << std::endl;
                std::cout << "Cikis yapmak icin (c) tusuna basiniz==>";
                std::cin >> yeniden;
                if (yeniden == 'y') {
                    continue;
                }
                else if (yeniden == 'c') {
                    goto cıkıs;
                }
                else {
                    std::cout << "Hatali tuslama yapildi..." << std::endl;
                    continue;
                }
                
        }
       
    }
    cıkıs:

         std::cout << "Cikis islemi gerceklesti..." << std::endl;


  
   
}











