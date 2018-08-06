//
//  gondola.h
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#ifndef gondola_hpp
#define gondola_hpp

#include <stdio.h>
#include "Persona.h"


class Gondola {
    
private:
    
    Persona arrayP[5];
    Gondola *siguiente2;
    friend class colaGondola;
    
public:
    Gondola (){}
    Gondola(Persona p[], Gondola *sigui = NULL) {    //Constructor
        for (int i=0;i<5;i++) 
        this->arrayP[i] = p[i];
        this->siguiente2 = sigui;
    }
};
typedef Gondola *pnodoArray;

#endif /* gondola_h */
