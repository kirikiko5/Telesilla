//
//  ColaGondola.h
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#ifndef ColaGondola_h
#define ColaGondola_h

class colaGondola {
    
private:
    pnodoArray ultimo, primero;
    
public:
    colaGondola() : ultimo(NULL), primero(NULL) {}
    //~colaGondola();
    void encolarTelesilla(Persona p[]);
    void mostrar();
    Persona desencolar();
};

#endif /* ColaGondola_h */
