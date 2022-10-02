//
// Created by NICOL on 1/10/2022.
//

#include "Defensa.h"

Defensa::Defensa(string nombre, string apellido, int edad, bool esTitular) : Jugador(nombre, apellido, edad,
                                                                                     esTitular) {

}
Defensa::~Defensa() {}

string Defensa::getStringD() {

    cout<< "Nombre: "<<  Persona::getNombre() <<endl;
    cout<< "Apellido: "<<  Persona::getApellido() <<endl;
    cout<< "Edad: "<<  Persona::getEdad() <<endl;
    cout<<"-----------"<<endl;

}


