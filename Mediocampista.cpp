//
// Created by NICOL on 1/10/2022.
//

#include "Mediocampista.h"

Mediocampista::Mediocampista(string nombre, string apellido, int edad, bool esTitular, int numeroAsistencias) : Jugador(nombre, apellido, edad, esTitular) {

    this->numeroAsistencias = numeroAsistencias;

}
Mediocampista::~Mediocampista() {}

string Mediocampista::getStringM() {

        cout<< "Nombre: "<<  Persona::getNombre() <<endl;
        cout<< "Apellido: "<<  Persona::getApellido() <<endl;
        cout<< "Edad: "<<  Persona::getEdad() <<endl;
        cout<<"-----------"<<endl;
}
