#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "cadran.h"

using namespace std;

int main()
{
    /*
    Cadran leCadran(1,1);

    for(int indice = 0; indice < 11; indice++)
    {
        leCadran.Afficher(indice, 3);
        sleep(1);
        if(indice == 10)
        {
            leCadran.Afficher("Fin", 1);
            char touche;
            cin >> touche;
        }

    }
    */

    Cadran uneAutreCadran(10, 10, 2, 20, 97, 41);

    for(int indice = 0; indice < 11; indice++)
    {
        uneAutreCadran.Afficher(indice, 3, 1);
        sleep(1);

        for(int indice2 = 10; indice2 > -1; indice2--)
        {
            uneAutreCadran.Afficher(indice2, 5, 1);
            sleep(1);
        }

        if(indice == 10)
        {
            uneAutreCadran.Afficher("Fin", 1, 1);
            sleep(1);
        }

    }

    uneAutreCadran.Effacer();
    char touche;
    cin >> touche;

    return 0;
}
