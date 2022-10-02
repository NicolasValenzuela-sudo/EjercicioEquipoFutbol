//
// Created by NICOL on 30/9/2022.
//

#ifndef TEMPLATECPP_PERSONA_H
#define TEMPLATECPP_PERSONA_H
#include <iostream>

using  namespace std;

class Persona {

    private:
    string nombre;
    string apellido;

    int edad;

    public:
    Persona( string nombre,string apellido, int edad);
    ~Persona();
    void getString();
    string getNombre();
    string getApellido();
    int getEdad();

};
inline string Persona::getNombre() {
    return this->nombre;
}
inline string Persona::getApellido() {
    return this->apellido;
}
inline int Persona::getEdad() {
    return this->edad;
}

#endif //TEMPLATECPP_PERSONA_H
