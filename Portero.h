//
// Created by NICOLAS on 1/10/2022.
//

#ifndef TEMPLATECPP_PORTERO_H
#define TEMPLATECPP_PORTERO_H
#include "Jugador.h"

class Portero : public Jugador {
private:
    int cantGolesRecibidos;
public:
    Portero(string nombre, string apellido, int edad, bool esTitular, int cantGolesRecibidos);
    ~Portero();
    string getStringP();
};
#endif //TEMPLATECPP_PORTERO_H
