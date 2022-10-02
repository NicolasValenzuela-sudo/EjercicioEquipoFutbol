//
// Created by NICOL on 1/10/2022.
//

#include "Jugador.h"

Jugador::Jugador(string nombre, string apellido, int edad, bool esTitular): Persona(nombre, apellido, edad) {

    this->esTitular = esTitular;

}
Jugador::~Jugador() {}

