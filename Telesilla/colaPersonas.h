//
//  cola.h
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#ifndef cola_h
#define cola_h
#include "nodo.h"
#include "persona.h"
#include "gondola.h"

class Cola {
    
private:
    pnodo frente, final;
    
public:
    Cola() : final(NULL), frente(NULL) {}
    ~Cola();
    void encolar ();
    Persona desencolar();
    Persona getValorFrente();
    void mostrar (pnodo);
    void initmostrar(); //Metodo recursivo de mostrar
    Persona getSiguiente();
    void encolarNuevo (Persona n);
    
};


#endif /* cola_h */
