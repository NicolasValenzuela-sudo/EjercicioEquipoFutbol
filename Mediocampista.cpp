//
// Created by NICOL on 1/10/2022.
//

#include "Mediocampista.h"

Mediocampista::Mediocampista(string nombre, string apellido, int edad, bool esTitular, int numeroAsistencias) : Jugador(nombre, apellido, edad, esTitular) {

    this->numeroAsistencias = numeroAsistencias;

}
Mediocampista::~Mediocampista() {}

string Mediocampista::getString() {
    return "Mediocampista";
}
