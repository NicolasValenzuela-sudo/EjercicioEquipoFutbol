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
    //void mostrar();

};
#endif //TEMPLATECPP_PERSONA_H
