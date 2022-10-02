//
// Created by NICOLAS on 30/9/2022.
//

#include "Equipo.h"
#include "Tecnico.h"

/*
Equipo::Equipo(string nombre, string pais) {
    this->nombre = nombre;
    this->pais = pais;
}*/

Equipo::Equipo(string nombre, string pais, Tecnico tecnico, Portero portero, Defensa *defensa, Mediocampista *mediocampo,
               Delantero *delantero) {

    this->nombre = nombre;
    this->pais = pais;

}

Equipo::~Equipo() {}

void Equipo::imprimir() {

    cout << "Nombre del equipo: " << this->nombre << endl;
    cout << "Pais del equipo: " << this->pais << endl;
    cout<< "Tecnico: " << tecnico.getString() << endl;
}

