//
// Created by kuro_ on 1/5/2021.
//

#include "BurbujaManager.h"

BurbujaManager::BurbujaManager() {}

BurbujaManager::BurbujaManager(vector<BurbujaSocial *> &listaBurbujas) : listaBurbujas(listaBurbujas) {}

vector<BurbujaSocial *> &BurbujaManager::getListaBurbujas() {
    return listaBurbujas;
}

void BurbujaManager::setListaBurbujas(vector<BurbujaSocial *> &listaBurbujas) {
    BurbujaManager::listaBurbujas = listaBurbujas;
}

void BurbujaManager::addBurbujaSocial( BurbujaSocial * bs) {
    listaBurbujas.push_back(bs);
}

int BurbujaManager::tamano() {
    return (int)listaBurbujas.size();
}
