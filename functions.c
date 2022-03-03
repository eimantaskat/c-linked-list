#include "functions.h"
#include "list.h"



void display(node *root) {
    node *t = root;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}

void append(node **root, int data) {
    if(*root) {
        node *t = *root;

        while(t->next) {
            t = t->next;
        }

        t->next = (node*) malloc(sizeof(node));
        t = t->next;
        t->data = data;
        t->next = NULL;
    } else {
        *root = (node*) malloc(sizeof(node));
        (*root)->data = data;
        (*root)->next = NULL;
    }
}

void push(node **root, int data) {
    node *t = (node*) malloc(sizeof(node));
    t->data = data;
    t->next = *root;
    *root = t;
}

int size(node *root) {
    int size = 0;
    if (root) {
         node* t = root;

        while(t->next) {
            t = t->next;
            size++;
        }
        size++;
    }

    return size;
}

int get(node *root, int index) {
    if (root) {
        int i = 0;
        node *t = root;
        while (t->next && i < index) {
            t = t->next;
            i++;
        }
        if (i == index)
            return t->data;
        else {
            printf("Elementas neegzistuoja\n");
            return 139;
        }
    } else {
        printf("Sarasas yra tuscias\n");
        return 1;
    }
}

void insertAfter(node **root, int pos, int value) {
    node *t;
    if (pos > 0) {
        int i = 0;
        t = *root;
        while (t->next && i < pos-1) {
            t = t->next;
            i++;
        }
        if (t->next) {
            node *tt = t->next;
            t->next = (node*) malloc(sizeof(node));
            t = t->next;
            t->data = value;
            t->next = tt;
        } else {
            printf("Elementas neegzistuoja\n");
        }
    } else {
        t = (node*) malloc(sizeof(node));
        t->data = value;
        t->next = *root;
        *root = t;
    }
}

void delete_position(node **root, int pos) {
    node *t;
    if (pos > 0) {
        int i = 0;
        t = *root;
        while (t->next && i < pos-1) {
            t = t->next;
            i++;
        }
        if (t->next) {
            node *tt = t->next->next;
            free(t->next);
            t->next = tt;
        } else {
            printf("Elementas neegzistuoja\n");
        }
    } else {
        t = (*root)->next;
        free(*root);
        *root = t;
    }
}

void delete_first(node **root) {
    node *t = *root;
    *root = t->next;
    free(t);
}

void delete_last(node **root) {
    node *t = *root;
    node* prev = NULL;
    do {
        prev = t;
        t = t->next;
    } while (t->next);
    prev->next = NULL;
    free(t);
}

int find(node *root, int data) {
    node *t = root;
    int i = 0;
    while (t) {
        if(t->data != data) {
            t = t->next;
            i++;
        } else
            return i;
    }
    return -1;
}