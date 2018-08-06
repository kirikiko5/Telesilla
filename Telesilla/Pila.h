//
//  pila.h
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#ifndef pila_h
#define pila_h
#include "Nodo.h"

class Pila {
    
private:
    pnodo cima;
    
public:
    
    //~Pila();
    void apilar(Persona);
    Persona desapilar();
    void mostrar();
    
};


#endif /* pila_h */
