//
// Created by kuro_ on 1/5/2021.
//

#include "BurbujaSocial.h"

BurbujaSocial::BurbujaSocial() {

}

vector<Persona *> &BurbujaSocial::getListaPersonas() {
    return listaPersonas;
}

void BurbujaSocial::setListaPersonas(vector<Persona *> &listaPersonas) {
    BurbujaSocial::listaPersonas = listaPersonas;
}

void BurbujaSocial::addPersona(Persona * persona) {
    listaPersonas.push_back(persona);
}

int BurbujaSocial::tamano() {
    return (int)listaPersonas.size();
}

ostream &operator<<(ostream &os, const BurbujaSocial &social) {
    os << "Burbuja" << endl;
    for (int i = 0; i < social.listaPersonas.size(); i++) {
        os << "Persona " << i + 1 << ": " << *social.listaPersonas[i] << endl;
    }
    return os;
}

//ostream &operator<<(ostream &os, const BurbujaSocial *social) {
//    os << "Burbuja" << endl;
//    for (int i = 0; i < social.listaPersonas.size(); i++){
//        os << "Personas " << i + 1  << ": " << social->listaPersonas[i] << endl;
//    }
//    return os;
//}




