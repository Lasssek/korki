#include <bits/stdc++.h>
using namespace std;

struct Osoba {
    char* imie;
    unsigned int wiek;
    char* nazwisko;
    char* adresZamieszkania;
} typedef Osoba;

void wypiszElementy (Osoba* osoba) {
    cout << "Imie: " << osoba->imie << " Nazwisko: " << osoba->nazwisko;
}



int main () {
    // Osoba osoba;
    // osoba.imie = "Niggerek";
    // osoba.nazwisko = "Czarnuszek";
    // osoba.adresZamieszkania = "Wołczyn";
    // osoba.wiek = 20;
    // /*
    //  int* wskaznik = &zmienna;
    // */

    // //    wypiszElementy (&osoba);

    // int zmienna = 20;
    // int* wskaznik = &zmienna; 
    // cout << *wskaznik; //dereferencja wskaznika

    // double zmiennyPrzecinek = 2.32;
    // zmienna = (int) zmiennyPrzecinek; //castowanie danych

    // cout << zmienna;

    // void* voidPoiner;

    // int* zmiennaJakas = (int*)voidPoiner;

    // wskaznik = nullptr; //nullptr == NULL czyli nic czysci wskaznik

    /*
        metoda c

        int* miejsce = (int*)malloc(sizeof(int) * 3); //alokacja

        free(miejsce); //dealokacja
    */
   /*
        metoda c++;

        int* miejsce = new int(3);

        delete miejsce;
   */

    // int array[1]; //statyczne

    // int rozmiar;
    // cout << "Podaj rozmiar tablicy: ";
    // cin >> rozmiar;


    // int* dynamicznyArray = (int*)malloc((sizeof(array)) * rozmiar);

    // // (dynamicznyArray[20] = 2) == (20[dynamicznyArray] = 30);

    

    // // int* tablica = *(i + tablica)

    // cout << dynamicznyArray[20];

    //free(dynamicznyArray)

    // tablice dynamiczne typu c++

    // int* tablica = new int[2];

    //STL = standard template library;

    std::vector <int> tablica;

    tablica.push_back(1);
    tablica.push_back(2);
    tablica.push_back(3);
    for (size_t i = 0; i < tablica.size(); ++i) {
        cout << tablica[i] << "\n";
    }
    cout << "\n";
    tablica.pop_back();
    for (size_t i = 0; i < tablica.size(); ++i) {
        cout << tablica[i] << "\n";
    }
    cout << "\n";
    tablica.pop_back();
        for (size_t i = 0; i < tablica.size(); ++i) {
        cout << tablica[i] << "\n";
    }
    cout << "\n";
    tablica.pop_back();
    for (size_t i = 0; i < tablica.size(); ++i) {
        cout << tablica[i] << "\n";
    }
    cout << "\n";
    tablica.push_back(2);
    tablica.push_back(3);
    for (size_t i = 0; i < tablica.size(); ++i) {
        cout << tablica[i] << "\n";
    }
    tablica.pop_back();

}