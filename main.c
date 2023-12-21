#include <stdio.h>
#include "arboles.h"

int main() {

    Node * root = NULL;

    root = insert(root, 6);
    root = insert(root, 2);
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 11);

    inOrden(root);
    printf("\n");
    preOrden(root);
    printf("\n");
    postOrden(root);

    return 0;
}
