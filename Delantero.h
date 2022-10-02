//
// Created by NICOLAS on 1/10/2022.
//

#ifndef TEMPLATECPP_DELANTERO_H
#define TEMPLATECPP_DELANTERO_H
#include "Jugador.h"

class Delantero : public Jugador {
    private:
    int golesAnotados;
public:
    Delantero(string nombre, string apellido, int edad, bool esTitular, int golesAnotados);
    ~Delantero();
    string getString();
};

#endif //TEMPLATECPP_DELANTERO_H
