#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

node* root = NULL;

void add(int new_data) {
    if (root) {
        struct node* t = root;
        while (t->next) {
            t = t->next;
        }
        
        t->next = (node*) malloc(sizeof(node));
        t = t->next;
        t->data = new_data;
        t->next = NULL;

    } else {
        root = (node*) malloc(sizeof(node));
        root->data = new_data;
        root->next = NULL;
    }
}

int main () {
    
    add(5);
    add(5);
    add(5);

    print(root);
    
}