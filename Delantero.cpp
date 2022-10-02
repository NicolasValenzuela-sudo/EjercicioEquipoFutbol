//
// Created by NICOLAS on 1/10/2022.
//

#include "Delantero.h"

Delantero::Delantero(string nombre, string apellido, int edad, bool esTitular, int golesAnotados) : Jugador(nombre, apellido, edad, esTitular) {

    this->golesAnotados = golesAnotados;

}

Delantero::~Delantero() {}

string Delantero::getStringDe() {

    cout<< "Nombre: "<<  Persona::getNombre() <<endl;
    cout<< "Apellido: "<<  Persona::getApellido() <<endl;
    cout<< "Edad: "<<  Persona::getEdad() <<endl;
    cout<< "Goles anotados: "<<  golesAnotados <<endl;
    cout<<"-----------"<<endl;

}

