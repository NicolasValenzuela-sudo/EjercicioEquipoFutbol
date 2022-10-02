//
// Created by NICOLAS on 1/10/2022.
//

#include "Delantero.h"

Delantero::Delantero(string nombre, string apellido, int edad, bool esTitular, int golesAnotados) : Jugador(nombre, apellido, edad, esTitular) {

    this->golesAnotados = golesAnotados;

}

Delantero::~Delantero() {}

string Delantero::getString() {
    return "Delantero";
}
