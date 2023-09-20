#include <iostream>
#include <iterator> // for std::size
#include <stdio.h>

void test (int dizi[]) {
    //std::cout << dizi; // Bize pointer'ı verir. Yani RAM bellekteki konumunu verir.
    for (int i = 0; i < 3; i++) {
        std::cout << dizi[i] << std::endl; // Direkt sayıların hepsini sıralar.
    }

}
void testchar (char dizi_2[]) {
    std::cout << dizi_2; // int gibi pointer'ını vermez. Direkt kelimeyi verir.
}
void testsize (int dizi_3[],int size) {
    for (int i = 0; i < size; i++) { // size değerini bilmediğimiz zaman bunu yaparız.
        std::cout << dizi_3[i] << std::endl;
    }
}
void testpointer (int* dizi_point) {
    std::cout << dizi_point[1];
}

int main()
{
                  // Fonksiyonlarda diziler.
    int dizi[3]{ 1,2,3 };
    //test (dizi);
    char dizi_2[]{ "HamzaUstalar" };
    //testchar (dizi_2);
    int dizi_3[5]{ 1,2,3,10,30 };
    int size = std::size (dizi_3);
    //testsize (dizi_3, size); // Büyüklüğünü bilmediğimiz dizi için yapılması gereken.
    int dizi_point[]{ 1,2,3 };

                 //0, 1,  2, 3, 4
    /*int puanlar[5]{10,20,30,70,100};

    std::cout<<puanlar[0]*/;
    // Tanımlama için
    // For description
    /*
    int puan[5]{};
    std::cout << puan[1]; // 0 değeri döner.
    */

    /*int puanlar[6]{ 3000,2,3 };
    std::cout << "Bu direkt 0. index degerini veririr=>" << *puanlar << std::endl;
    std::cout << "Bize pointer'ini verir=>" << puanlar;*/

    /*
    int puanlar[3]{ 10,20,40 }; // Diziyi tanımladık
    int* ptr = puanlar; // 0. indexin bellekteki konumunu pointer ile tuttuk
    int* ptr_1 = puanlar + 1; // 2. index
    std::cout << ptr_1 << std::endl; // RAM bellekteki konumu
    std::cout << ptr << std::endl; // 0. indexin RAM bellekteki konumu
    std::cout << puanlar[4]; // Dizimizin dışında bir yer. Bambaşka bir şeyi konum olarak verir.
    */
    // Dizilerde for döngüsü
    // for loops in arrays. arrays=diziler,loops=döngü

    /*
    int sayilar[4]{ 100,300,20,40 };
    for (int i = 0, i < 4, i++) { // for(i yi tanımla,nereye kadar?,kaç artışlı?)
        std::cout << sayilar[i] << std::endl;
    }
    */

    // İç içe diziler
    // nested arrays. nested=iç içe 

    /*int dizi[1][1][1][1][1]
    {
        {
            {
                {   
                    {
                        1
                    }
                     
                }
            }
        }
    };
    std::cout << dizi[0][0][0][0][0]; // => 1 
    */


    /*
    int sayilar[1][2][3] = { {{10,20,30} , {40,50,60}} }; // Diziyi oluştururken standart sayılar yazılır. İndis şeklinde yazılmaz.
    std::cout << sayilar[0][0][1]; // Ekrana yazdırırken indisler devreye girer ve ona göre yazılır.
    */

    // DİZİLERİ FOR DÖNGÜSÜNE SOKALIM

    /*
    int puanlar[2][3][1] = { { {10} , {20} , {30} },{ {1} , {2} , {3} } };

    for (int i = 0; i < 2;i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 1; k++) {
                std::cout << puanlar[i][j][k] << std::endl;
            }
        }
    }
    */

  /*  int sayilar[3][1][4][2] = { {{{1,2},{3,4},{5,6},{7,8}}},{{{9,10},{11,12},{13,14},{15,16}}},{{{17,18},{19,20},{21,22},{23,24}}}};

    int sayilar_2[2][3][1][4] = {
        {
            {
                {1,2,3,4}
            },
            {
                {5,6,7,8}
            },
            {
                {9,10,11,12}
            }
        },
        {
            {
                {13,14,15,16}
            },
            {
                {17,18,19,20}
            },
            {
                {21,22,23,24}
            }
        }
    };*/

    //std::cout << std::size (sayilar[0][0][2]); // dizinin eleman sayısıdır.

















    }

   