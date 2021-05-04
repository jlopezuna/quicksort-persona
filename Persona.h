//
// Created by kuro_ on 1/5/2021.
//

#ifndef QUICKSORT_PERSONAS_PERSONA_H
#define QUICKSORT_PERSONAS_PERSONA_H

#include <string>
#include <ostream>

using namespace std;

class Persona {
private:
    string nombre;
    string apellido;

public:
    Persona();

    Persona(const string &nombre, const string &apellido);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellido() const;

    void setApellido(const string &apellido);

    friend ostream &operator<<(ostream &os, const Persona &persona);
};


#endif //QUICKSORT_PERSONAS_PERSONA_H
