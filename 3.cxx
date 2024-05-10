#include <bits/stdc++.h>


using namespace std;

int arraySumFunc (int tablica[], int n) {
    int suma = 0;
    for(int i=0;i < n;i++)
    {
        suma+=tablica[i];
        
    }
    return suma;
}
int* array(int a[],int b[]) {
    int punkty_a=0;
    int punkty_b=0;

    for(int i=0;i<3;i++) {
        if(a[i]>b[i]) {
            punkty_a++;
        }
        if(a[i]<b[i]) {
            punkty_b++;
        }
    }

    int tab[2]={punkty_a,punkty_b};
    
    return tab;
    //blad
}

int main () {

}