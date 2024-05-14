#include <bits/stdc++.h>

using namespace std;

class Prostokat {
    public:
        unsigned int bokA;
        unsigned int bokB;
        unsigned int pole;
        unsigned int obwod;

    void wyswietlPole () {
        std::cout << "Pole: " << this->pole;
    }

    Prostokat (int a, int b) { //konstruktor z parametrami
        this->bokA = a;
        this->bokB = b;
        this->pole = a * b;
        this->obwod = 2 * a + 2 * b;
    }  

    ~Prostokat () { //desktruktor
        std::cout << "\nCzarne kurwy smaza sie w piekle\n";
    }

    static int dodaj (int a, int b) {
    return a * b;
}

};

class Trojkat{
public:
    unsigned int bok1;
    unsigned int bok2;
    unsigned int bok3;
    unsigned int wysokosc;
    unsigned int pole;
    unsigned int obwod;

Trojkat(int a, int b, int c, int h){
    bok1=a;
    bok2=b;
    bok3=c;
    wysokosc=h;
}

void obliczPole(){
   pole=(bok1*wysokosc)/2;
   
}

void obliczObwod(){
   obwod=bok1+bok2+bok3;
   
}

void wyswietlDane(){
    cout<<"\nPole: "<<pole;
    cout<<"\nObwod: "<<obwod;
    cout<<"\nBok1: "<<bok1;
    cout<<"\nBok2: "<<bok2;
    cout<<"\nBok3: "<<bok3;
    cout<<"\nWysokosc: "<<wysokosc;
}

static int dodaj (int a, int b) {
    return a + b;
}

bool trojkatProstokatny(){

    if((bok1*bok1)+(bok2*bok2)==(bok3*bok3))
    {
        return true;
    }
    return false;
}
};



int main () {
    // Prostokat prostokat1(2, 5);

    // prostokat1.wyswietlPole();

    Trojkat trojkat1(3,4,5,5); //
    trojkat1.obliczPole();
    trojkat1.obliczObwod();
    trojkat1.wyswietlDane();

    int dodawanie = Trojkat::dodaj(1, 2);
    int mnozenie = Prostokat::dodaj(1, 2);


    Prostokat* prostokat = new Prostokat(2, 4); //wskaznik do obiektu (heap)

    delete prostokat;


}