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

    printf("\nInorder\n");
    inOrden(root);
    printf("\nPreorder\n");
    preOrden(root);
    printf("\nPostOrder\n");
    postOrden(root);

    return 0;
}
