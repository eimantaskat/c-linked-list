#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void print(node* root) {
    node* t = root;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}