//
//  main.cpp
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "colaPersonas.h"
#include "ColaGondola.h"
#include "Gondola.h"
#include "Pila.h"

#define MAX 5

using namespace std;
void impresion(int);
void comprobar (Persona[], Pila, Cola);

int main(int argc, const char * argv[]) {
    
    Cola tornos[5];
    colaGondola colaGondola;
    Persona aux[5];
    Pila espera;
    
    srand (static_cast<unsigned int> (time(NULL)));
    
    cout << "CREANDO COLAS";
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX*2; j++) {
            tornos[i].encolar();
        }
    }
    
    for (int i = 0; i < MAX; i++) {
        tornos[i].initmostrar();
        sleep(1);
    }
    cout << "\n\nLLENANDO GONDOLAS\n";
    int contadorS = 1;
    for (int j = 0; j < MAX*2; j++) {
    for (int i = 0; i < MAX; i++) {
        aux[i] = tornos[i].getValorFrente();
    }
    comprobar(aux, espera, tornos[0]);
    colaGondola.encolarTelesilla(aux);
    cout << "\n";
    sleep(1);
    impresion(contadorS);
    colaGondola.mostrar();
    colaGondola.desencolar();
    contadorS++;
    }
    sleep(1);
    cout << "\nTODAS LAS GONDOLAS HAN LLEGADO A SU DESTINO\n";

}


void comprobar(Persona array[], Pila p, Cola c) {
    int contadorN = 0, contador = 0;
    for (int i = 0; i < MAX; i++) {
    if ((array[i].getCondicion() == 'N') || (array[i].getCondicion() == 'A')) {
        contador++;
    }
    if (array[i].getCondicion() == 'N') {
            contadorN++;
        }
    }
    if (contador < 5) {
        array[0] = p.desapilar();
    }
    if (contadorN == 5) {
        p.apilar(array[0]);
        //c.desencolar();
        array[0] = c.getValorFrente();
    }
}

void impresion(int contador) {
    switch (contador) {
        case 1:
            cout << "\nPRIMERA GONDOLA\n";
            break;
        case 2:
            cout << "\nSEGUNDA GONDOLA\n";
            break;
        case 3:
            cout << "\nTERCERA GONDOLA\n";
            break;
        case 4:
            cout << "\nCUARTA GONDOLA\n";
            break;
        case 5:
            cout << "\nQUINTA GONDOLA\n";
            break;
        case 6:
            cout << "\nSEXTA GONDOLA\n";
            break;
        case 7:
            cout << "\nSEPTIMA GONDOLA\n";
            break;
        case 8:
            cout << "\nOCTAVA GONDOLA\n";
            break;
        case 9:
            cout << "\nNOVENA GONDOLA\n";
            break;
        case 10:
            cout << "\nDECIMA GONDOLA\n";
            break;
    }
}
