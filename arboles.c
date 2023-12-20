//
// Created by Administrador on 20/12/2023.
//

#include "arboles.h"
#include <stdlib.h>
#include <stdio.h>

Node *newNode(int data) {
    Node * aux = NULL;
    aux  = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error en la asignacion de memoria\n");
        exit (-1);
    }
    aux->data = data;
    aux->der = NULL;
    aux->izq = NULL;

    return aux;
}

Node *insert(Node *root, Node *nodo) {
    if(!root){
        return nodo;
    }
    if(nodo->data < root->data){
        root->izq = insert(nodo->izq, nodo);
    }else{
        root->der = insert(nodo->der, nodo);
    }
    return root;
}

void inOrden(Node *root) {
    if(root){
        inOrden(root->izq);
        printf("%d\t", root->data);
        inOrden(root->der);
    }
}

void postOrden(Node *root) {
    if(root){
        postOrden(root->izq);
        postOrden(root->der);
        printf("%d\t", root->data);
    }
}

void preOrden(Node *root) {
    if(root){
        printf("%d\t", root->data);
        preOrden(root->izq);
        preOrden(root->der);
    }
}
