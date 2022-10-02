//
// Created by NICOL on 1/10/2022.
//

#include "Defensa.h"

Defensa::Defensa(string nombre, string apellido, int edad, bool esTitular) : Jugador(nombre, apellido, edad,
                                                                                     esTitular) {

}
Defensa::~Defensa() {}

string Defensa::getString() {
    return "Defensa";
}

