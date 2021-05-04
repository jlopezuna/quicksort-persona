//
// Created by kuro_ on 1/5/2021.
//

#ifndef QUICKSORT_PERSONAS_BURBUJASOCIAL_H
#define QUICKSORT_PERSONAS_BURBUJASOCIAL_H

#include "Persona.h"
#include <vector>
#include <ostream>

using namespace std;

class BurbujaSocial {
private:
    vector<Persona *> listaPersonas;

public:
    BurbujaSocial();

    vector<Persona *> &getListaPersonas();

    void setListaPersonas(vector<Persona *> &listaPersonas);

    void addPersona(Persona * persona);

    int tamano();

    friend ostream &operator<<(ostream &os, const BurbujaSocial &social);
};


#endif //QUICKSORT_PERSONAS_BURBUJASOCIAL_H
