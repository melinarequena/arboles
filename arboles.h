//
// Created by Administrador on 20/12/2023.
//

#ifndef ARBOLES_ARBOLES_H
#define ARBOLES_ARBOLES_H

typedef struct node{
    int data;
    struct node * der;
    struct node * izq;
}Node;


Node * insert(Node * root, Node * nodo);
Node * newNode(int data);
void inOrden(Node * root);
void postOrden(Node * root);
void preOrden(Node * root);



#endif //ARBOLES_ARBOLES_H
