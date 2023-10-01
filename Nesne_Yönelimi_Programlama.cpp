#include <iostream>
#include <string>

// Erişim Belirteçleri : Public,Private,Protected...
class Payment {
	protected:
		std::string test = "Merhaba"; // Merhabayı sadece miras olarak değiştirebiliriz. Yani kalıtım yolu ile
	// hasCode'un değişmesini istemiyorum. O zaman neler yapılabilir?
	private:
		std::string hasCode = "123456789"; // Aşşağıda ödeme.hasCode="43" yapıldığında hata verir. Çünkü değiştirilebilir değildir...
		void sorgula () {
			double dolar = 27.41;
			double sterlin = 33.63;
			double sonuç = sterlin - dolar;
			// Burada artık halka açık olamayan kısım olduğu için buraları insanlar görmezler.
			// Fakat dolaylı olarak sorgular() metodunu kullanabilirler sadece kodları görmezler.
			std::cout << "Sorgula private'i calisti..." << " Fark:" << sonuç << std::endl;
		}

	public: // Public yani dışarıya açık olduğu için ben aşşağıda bunların hepsini istersem değiştirebilirim veya bir başkası değiştirebilir...
		std::string paraBirimi = "tl";
		std::string tutar = "0.0";
		
		void pay () {
			std::cout << "Veriler bankaya gonderiliyor. Para birimi:" + this->paraBirimi + " Tutar:" + this->tutar + " Kod:" + this->hasCode << std::endl;
			sorgula ();
		}
};
class Alan{
	public:
		int genislik, yükseklik,alan;
		void giris () {
			std::cout << "Yukseklik gir:" << std::endl;
			std::cin >> yükseklik;
			std::cout << "Genislik gir:" << std::endl;
			std::cin >> genislik;
		}
		void hesapla () {
			alan = yükseklik * genislik;
			std::cout << "Alan:" << alan << std::endl;
		}
};
class Nokta {
	public:
		int x, y; // x ve y özellikleri...
		void degeratama (int _x, int _y) {
			x = _x;
			y = _y;
		}
		void ekranayaz () {
			std::cout << x << "," << y << std::endl;
		}
		bool baslangicmi () {
			return x == 0 && y == 0; // x==0 ve y==0 ise true döndürür. Aşşağıda yaptığımın kısası.
			/*if (x == 0 && y == 0)
				return true;
			else
				return false;*/
		}
};
int main()
{
	Nokta alfa;
	Nokta beta; // Ikinci nesnemiz...
	Nokta* point; // Pointer ile olusturulan nesnemiz...
	Nokta* new_point; // Değer çalmadan oluşturduğumuz pointer...
	alfa.degeratama (0,1); 
	alfa.ekranayaz ();
	beta.degeratama (0, 0);
	beta.ekranayaz ();
	if (alfa.baslangicmi () && beta.baslangicmi ()) {
		std::cout << "Ikiside baslangic noktasindadir..." << std::endl;
	}
	else if (alfa.baslangicmi ()) {
		std::cout << "Sadece alfa baslangic noktasindadir..." << std::endl;
	}
	else if (beta.baslangicmi ()) {
		std::cout << "Sadece beta baslangic noktasindadir..." << std::endl;
	}
	else {
		std::cout << "Hicbiri baslangic noktasinda degildir..." << std::endl;
	}
	std::cout << "Pointer ile yazilan degerler: " << std::endl;
	new_point = new Nokta;
	new_point->degeratama (0, 3);
	new_point->ekranayaz ();
	point = &alfa;
	point->ekranayaz();




					// Pointer kullanırken -> kullanılır dikkat!!
					/*Payment ödeme;
					ödeme.paraBirimi = "tl";
					ödeme.tutar = "50.10";
	
					ödeme.pay ();*/

					// Alan alanhesapla; // alan bir değişkendir.
					// alanhesapla.giris ();
					// alanhesapla.hesapla ();
				
	return 0;
	
}


