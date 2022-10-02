//
// Created by NICOLAS on 30/9/2022.
//

#ifndef TEMPLATECPP_TECNICO_H
#define TEMPLATECPP_TECNICO_H
#include "Persona.h"

class Tecnico : public Persona {
private:

    int aniosExperiencia;
    bool esNacional;

public:

    Tecnico(string nombre, string apellido, int edad, int aniosExperiencia, bool esNacional);
    ~Tecnico();
    void getStringT();
};
#endif //TEMPLATECPP_TECNICO_H
