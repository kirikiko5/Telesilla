//
//  cola.cpp
//  Telesilla
//
//  Created by Enrique on 30/10/15.
//  Copyright © 2015 Enrique. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "colaPersonas.h"
using namespace std;

Cola::~Cola() {
    while (frente) desencolar();
}

//Metodo para generar adultos y niños
Persona static aleatorio() {
    
    Persona aux;
    
    if (rand()%2) aux.setCondicion('A');
    else aux.setCondicion('N');
    
    return aux;
}

//Metodo para meter un elemento en la cola
void Cola::encolar () {
    
    pnodo nuevo = new Nodo(aleatorio()); //Se crea un nuevo nodo
    
    if (final) final->siguiente = nuevo; //Si hay final
    
    final = nuevo;
        if (!frente)                    //Si no hay final ni frente, el frente vale lo mismo que el final
        frente = nuevo;
}

//Metodo para quitar un elemento de la cola
Persona Cola::desencolar() {
    
    pnodo nodo = frente;
    Persona v;
    
    if (!nodo)  //Si la cola esta vacia devuelve 0
        cout << "Cola vacia";
    
    frente = nodo -> siguiente; //Se asigna a la primera la direccion del segundo nodo
    v = nodo->valor; //Se guarda el valor de retorno
    
    delete nodo; //Se borra el nodo
    if(!frente) final = NULL;  //Si cola vacia, el ultimo debe ser NULL tambien
    
    return v;
}

//Los siguientes dos metodos, es la forma recursiva de mostrar
void Cola::initmostrar (){
    
    pnodo actual = frente;  //Creamos un nodo que no ayuda a recorrer la cola
    
    if (actual == NULL) cout << "LA LISTA ESTA VACIA \n"; //Tratamos posibles errores
    else {
        cout << "\n";
        Cola::mostrar(actual);  //Llamamos a la funcion
    }
    
}

void Cola::mostrar (pnodo actual){
    cout << actual->valor.getCondicion() << " | ";
    if (actual->siguiente != NULL) Cola::mostrar(actual->siguiente);
}


Persona Cola::getValorFrente() {
    return frente->valor;
}

Persona Cola::getSiguiente() {
    if (!final) cout << "ERROR";
    return frente->siguiente->valor;
}

void Cola::encolarNuevo (Persona n) {
    
    pnodo nuevo = new Nodo(n); //Se crea un nuevo nodo
    
    if (final) final->siguiente = nuevo; //Si hay final
    
    final = nuevo;
    if (!frente)                    //Si no hay final ni frente, el frente vale lo mismo que el final
        frente = nuevo;
}

/*void Cola::mostrar (){
 
 pnodo actual = frente;
 
 
 if (actual == NULL) { //Comprobamos que la lista no esta vacia
 cout << "LA LISTA ESTA VACIA \n";
 }
 else {
 while (actual != NULL) {    //Si la lista no esta vacia
 cout << actual->valor << " \n";   //Imprimimos por pantalla el valor
 actual = actual -> siguiente;   //Avazamos a la siguiente posicion
 }
 }
 }*/




