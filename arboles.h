//
// Created by Administrador on 20/12/2023.
//

#ifndef ARBOLES_ARBOLES_H
#define ARBOLES_ARBOLES_H

#include <stdbool.h>

typedef struct node{
    int data;
    struct node * der;
    struct node * izq;
}Node;


Node * insert(Node * root, int data);
Node * newNode(int data);
void inOrden(Node * root);
void postOrden(Node * root);
void preOrden(Node * root);
bool busqueda(Node * root, int valorABuacar);


#endif //ARBOLES_ARBOLES_H
