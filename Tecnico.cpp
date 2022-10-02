//
// Created by NICOL on 30/9/2022.
//

#include "Tecnico.h"

using namespace std;
Tecnico::Tecnico(string nombre, string apellido, int edad, int aniosExperiencia, bool esNacional): Persona(nombre, apellido, edad) {

    this->aniosExperiencia = aniosExperiencia;

    this->esNacional = esNacional;

}
Tecnico::~Tecnico() {}

string Tecnico::getString() {
    return "Tecnico";
}
