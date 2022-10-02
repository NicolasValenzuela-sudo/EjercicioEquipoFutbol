//
// Created by NICOL on 1/10/2022.
//

#include "Portero.h"
#include <iostream>

using namespace std;

Portero::Portero(string nombre, string apellido, int edad, bool esTitular, int cantGolesRecibidos):Jugador(nombre, apellido, edad, esTitular) {

    this->cantGolesRecibidos = cantGolesRecibidos;

}
Portero::~Portero() {}

string Portero::getStringP() {
    cout<< "Nombre: "<<  Persona::getNombre() <<endl;
    cout<< "Apellido: "<<  Persona::getApellido() <<endl;
    cout<< "Edad: "<<  Persona::getEdad() <<endl;
    cout<< "Cantidad de goles recibidos: "<<  cantGolesRecibidos <<endl;
    cout<<"--------------------------------"<<endl;
}
