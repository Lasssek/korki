#include <bits/stdc++.h>

using namespace std;

void pisanie () {
    //++ inkrementacja
    //-- dekrementacja

    //<0, 4)
    //(0, 23)\{4};

    //control flow
    //continue
    //break

    const int x = 5;
    x = 1; //nie dziala

    int liczba = 10;

    switch (liczba) {
        case 1:

            /*
                kod do wykonania
            */
           break;
        case 10:

            /*
                kod do wykonania
            */
           break;
        default:

            /*
                kod jak nic sie nie wykona;
            */

            break;
    }

    bool gra = true;

    for (int i = 0; i < 23; i++) {
        if (4==i)
        {
            ++i;
        }
        cout << i << "\n";
        
    }

    int hp = 100;

    while (gra == true) {
        --hp;
        
        if (hp <= 0) {
            gra = false;
        }
    }

    do {

    } while (/*warunek*/);
}

int main () {
    pisanie();
}

