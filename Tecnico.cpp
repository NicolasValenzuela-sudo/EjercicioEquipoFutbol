//
// Created by NICOL on 30/9/2022.
//

#include "Tecnico.h"
#include "Persona.h"


using namespace std;
Tecnico::Tecnico(string nombre, string apellido, int edad, int aniosExperiencia, bool esNacional): Persona(nombre, apellido, edad) {

    this->aniosExperiencia = aniosExperiencia;

    this->esNacional = esNacional;

}
Tecnico::~Tecnico() {}

void Tecnico::getStringT() {

    cout<< "Nombre: "<<  Persona::getNombre() <<endl;
    cout<< "Apellido: "<<  Persona::getApellido() <<endl;
    cout<< "Edad: "<<  Persona::getEdad() <<endl;
    cout<<"--------------------------------"<<endl;

}
