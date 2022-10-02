#include <iostream>
#include "Equipo.h"
#include "Tecnico.h"
#include "Portero.h"
#include "Defensa.h"
#include "Mediocampista.h"
#include "Delantero.h"

int main() {
    //Persona tecnico1("Juan", "Perez", 45);

    Tecnico tecnico("Carlos","Queiroz",66, 30, true);
    Portero portero("David", "Ospina", 30, true, 10);
    Defensa defensa1("Mina", "Yeri", 24, true);
    Defensa defensa2("Davinson", "Sanchez", 23, true);
    Defensa defensa3("Stefan", "Medina", 29, true);
    Mediocampista mediocampista1("Mateus", "Uribe", 28, true, 12);
    Mediocampista mediocampista2("Wilmar","Barrios", 25, true, 12);
    Mediocampista mediocampista3("James", "Rodriguez", 28, true, 32);
    Mediocampista mediocampista4("Juan Guillermo", "Cuadrado", 31, true, 10);
    Delantero delantero1("Radamel","Falcao", 33, true, 15);
    Delantero delantero2("Duvan", "Zapata", 28, true, 12);
    Delantero delantero3("Luis", "Muriel", 30, true, 10);

    Defensa *defensas = new Defensa[3] {defensa1, defensa2, defensa3};

    Delantero *delanteros= new Delantero[2]{delantero1, delantero2};

    Mediocampista *mediocampistasTotal= new Mediocampista[4]{mediocampista1, mediocampista2, mediocampista3, mediocampista4};

    Equipo equipo("Colombia","Colombia", tecnico, portero, defensas, mediocampistasTotal, delanteros);

    equipo.imprimir();
    //tecnico.getStringT();


    return 0;
}
