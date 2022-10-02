//
// Created by NICOLAS on 1/10/2022.
//

#ifndef TEMPLATECPP_DEFENSA_H
#define TEMPLATECPP_DEFENSA_H
#include "Jugador.h"

class Defensa : public Jugador {
private:

public:
    Defensa(string nombre, string apellido, int edad, bool esTitular);

    ~Defensa();

    string getStringD();
};
#endif //TEMPLATECPP_DEFENSA_H
