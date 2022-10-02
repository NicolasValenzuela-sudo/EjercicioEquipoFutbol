//
// Created by NICOLAS on 30/9/2022.
//

#ifndef TEMPLATECPP_EQUIPO_H
#define TEMPLATECPP_EQUIPO_H
#include <iostream>
#include "Defensa.h"
#include "Mediocampista.h"
#include "Portero.h"
#include "Tecnico.h"
#include "Delantero.h"


using namespace std;

class Equipo {

private:
    Tecnico tecnico;
    Portero portero;
    Defensa *defensa;
    Mediocampista *mediocampo;
    Delantero *delantero;
    string nombre;
    string pais;
public:
    //Equipo(string nombre, string pais);
    Equipo(string nombre,string pais, Tecnico tecnico, Portero portero, Defensa *defensa, Mediocampista *mediocampo,
           Delantero *delantero);
    ~Equipo();
    void imprimir();
};
#endif //TEMPLATECPP_EQUIPO_H
