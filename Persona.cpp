//
// Created by kuro_ on 1/5/2021.
//

#include "Persona.h"

Persona::Persona() {}


Persona::Persona(const string &nombre, const string &apellido) : nombre(nombre), apellido(apellido) {}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

const string &Persona::getApellido() const {
    return apellido;
}

void Persona::setApellido(const string &apellido) {
    Persona::apellido = apellido;
}

ostream &operator<<(ostream &os, const Persona &persona) {
    os << "nombre: " << persona.nombre << " apellido: " << persona.apellido;
    return os;
}
