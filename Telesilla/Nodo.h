//
//  nodo.h
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#ifndef nodo_h
#define nodo_h
#include "Persona.h"
#include "Gondola.h"

class Nodo {
    
private:
    Persona valor;
    Nodo *siguiente;
    friend class Cola;
    friend class Pila;
    
public:
    Nodo(Persona v, Nodo *sigu = NULL) {    //Constructor
        this->valor = v;
        this->siguiente = sigu;
    }
};
typedef Nodo *pnodo;


#endif /* nodo_h */
