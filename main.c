#include <stdio.h>
#include "arboles.h"

int main() {

    Node * root = NULL;
    root = insert(root, newNode(6));
    root = insert(root, newNode(2));
    root = insert(root, newNode(9));
    root = insert(root, newNode(10));
    root = insert(root, newNode(5));
    root = insert(root, newNode(11));

    inOrden(root);
    printf("\n");
    preOrden(root);
    printf("\n");
    postOrden(root);

    return 0;
}
