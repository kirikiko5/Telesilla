//
//  persona.cpp
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#include <stdio.h>
#include "Persona.h"

void Persona::setCondicion (char condition) {
    condicion = condition;
}

char Persona::getCondicion() {
    return condicion;
}