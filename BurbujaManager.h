//
// Created by kuro_ on 1/5/2021.
//

#ifndef QUICKSORT_PERSONAS_BURBUJAMANAGER_H
#define QUICKSORT_PERSONAS_BURBUJAMANAGER_H


#include "Persona.h"
#include <vector>
#include "BurbujaSocial.h"

using namespace std;

class BurbujaManager {
private:
    vector<BurbujaSocial *> listaBurbujas;
public:
    BurbujaManager();

    BurbujaManager(vector<BurbujaSocial *> &listaBurbujas);

    vector<BurbujaSocial *> &getListaBurbujas();

    void setListaBurbujas(vector<BurbujaSocial *> &listaBurbujas);

    void addBurbujaSocial(BurbujaSocial *bs);

    int tamano();
};


#endif //QUICKSORT_PERSONAS_BURBUJAMANAGER_H
