//
// Created by NICOLAS on 30/9/2022.
//

#include "Equipo.h"
#include "Tecnico.h"
#include "Portero.h"

/*
Equipo::Equipo(string nombre, string pais) {
    this->nombre = nombre;
    this->pais = pais;
}*/

Equipo::Equipo(string nombre, string pais, Tecnico tecnico, Portero portero, Defensa *defensa, Mediocampista *mediocampo,
               Delantero *delantero) : tecnico(tecnico), portero (portero),defensa(defensa),mediocampo(mediocampo),delantero(delantero) {

    this->nombre = nombre;
    this->pais = pais;

}

Equipo::~Equipo() {}

void Equipo::imprimir() {

    cout << "Nombre del equipo: " << this->nombre << endl;
    cout << "Pais del equipo: " << this->pais << endl;
    cout << "Tecnico" << endl;
    tecnico.getStringT();
    cout << "Portero" << endl;
    portero.getStringP();
    cout << "Defensa" << endl;
    for (int i = 0; i < 3; i++) {
        defensa[i].getStringD();
    }
    cout<<"--------------------------------"<<endl;
    cout << "Mediocampista" << endl;
    for (int i = 0; i < 3; i++) {
        mediocampo[i].getStringM();
    }
    cout<<"--------------------------------"<<endl;
    cout << "Delantero" << endl;
    for (int i = 0; i < 2; i++) {
        delantero[i].getStringDe();
    }

}