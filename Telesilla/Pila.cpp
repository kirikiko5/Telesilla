
//
//  pila.cpp
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#include <iostream>
#include "Pila.h"
#include "Persona.h"

using namespace std;

void Pila::apilar(Persona v)
{
    pnodo nuevo; //Var aux para manipular para manipular el nuevo nodo el nuevo nodo
    //Se crea un nodo nuevo
    nuevo = new Nodo(v, cima);
    //El comienzo de comienzo de la pila la pila es el nuevo nodo
    cima = nuevo;
}

Persona Pila::desapilar()
{
    pnodo nodo; //Var aux para manipular el nodo
    Persona v; //Var aux para el retorno del valor del nodo
    
    if(!cima)
        cout << "No hay nodos en la pila \n"; // Si no hay nodos en la pila se devuelve 0
    
    // Nodo apunta al primer elemento de la pila
    nodo = cima;
    //Se asigna a pila toda la pila menos el primer elemento
    cima= nodo->siguiente;
    //Se guarda el retorno del valor del nodo
    v = nodo->valor;
    //Se borra el nodo //Se borra el nodo
    delete nodo;
    return v;
}
