#include <iostream>
#include "BurbujaSocial.h"
#include "BurbujaManager.h"
#include "QuickSort.h"
/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>

using namespace std;

int main() {

    cout << "estoy aqui" << endl;

    //BurbujaSocial * bs = new BurbujaSocial;

    BurbujaManager * bm = new BurbujaManager;

    int numeroBurbujas = 10;
    srand(time(nullptr));

    for(int i = 0; i < numeroBurbujas;i++){
        int numeroPersonas = rand() % 5 + 1;
        BurbujaSocial * bs = new BurbujaSocial;
        for(int j = 0; j < numeroPersonas; j++){
            bs->addPersona(new Persona(to_string(i) , to_string(j)));
        }
        bm->addBurbujaSocial(bs);
    }

    for (int i = 0; i < bm->tamano(); ++i) {
        cout << *bm->getListaBurbujas().at(i)<< endl;
    }

    int tamanoBm =  bm->tamano() - 1;

    QuickSort::sort(bm->getListaBurbujas(), 0 , tamanoBm);

    cout << "testing sort---------------" << endl;

    for (int i = 0; i < bm->tamano(); ++i) {
        cout << *bm->getListaBurbujas().at(i)<< endl;
    }

    return 0;
}
