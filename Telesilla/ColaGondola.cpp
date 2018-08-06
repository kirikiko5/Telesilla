//
//  gondola.cpp
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#include "Gondola.h"
#include "ColaGondola.h"
#include  <stdio.h>
#include  <iostream>
#define MAX 5

using namespace std;

//
/*colaGondola::~colaGondola(){
     while (primero) desencolar();
}*/


void colaGondola::encolarTelesilla(Persona p[]) {
    
    pnodoArray nuevo = new Gondola(p); //Se crea un nuevo nodo
    
    if (ultimo) {
        ultimo->siguiente2 = nuevo; //Si hay final
    }
    
    ultimo = nuevo;
    if (!primero) {                  //Si no hay final ni frente, el frente vale lo mismo que el final
        primero = nuevo;
    }
}

Persona colaGondola::desencolar() {
    
    pnodoArray nodo = primero;
    Persona v[5];
    
    if (!nodo)  //Si la cola esta vacia devuelve 0
        cout << "Cola vacia";
    
    primero = nodo -> siguiente2; //Se asigna a la primera la direccion del segundo nodo
    for(int i = 0; i < MAX ; i++) {
    v[i] = nodo->arrayP[i]; //Se guarda el valor de retorno
    }
    delete nodo; //Se borra el nodo
    if(!primero) ultimo = NULL;  //Si cola vacia, el ultimo debe ser NULL tambien
    
    return v[4];
}


void colaGondola::mostrar () {
 
 pnodoArray actual = primero;
 
 
    if (actual == NULL) { //Comprobamos que la lista no esta vacia
        cout << "LA LISTA ESTA VACIA \n";
    }
    else {
        while (actual != NULL) {    //Si la lista no esta vacia
            for (int i =0 ; i < 5; i++) {
            cout << actual->arrayP[i].getCondicion() << " | ";   //Imprimimos por pantalla el valor
            }
            cout << "\n";
            actual = actual -> siguiente2;   //Avazamos a la siguiente posicion
    }
    }
}