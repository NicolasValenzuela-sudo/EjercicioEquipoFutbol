//
// Created by NICOLAS on 1/10/2022.
//

#ifndef TEMPLATECPP_MEDIOCAMPISTA_H
#define TEMPLATECPP_MEDIOCAMPISTA_H
#include "Jugador.h"

class Mediocampista : public Jugador {
    private:
    int numeroAsistencias;
    public:
    Mediocampista(string nombre, string apellido, int edad, bool esTitular, int numeroAsistencias);
    ~Mediocampista();
    string getString();

};
#endif //TEMPLATECPP_MEDIOCAMPISTA_H
