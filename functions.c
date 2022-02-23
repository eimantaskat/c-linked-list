#include "functions.h"
#include "list.h"

void print(node *root) {
    node *t = root;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
}

void add(node **root, int data) {
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

bool is_empty(node *root) {
    if (root)
        return false;
    else
        return true;
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
            printf("Index out of bounds\n");
            return 139;
        }
    } else {
        printf("List is empty\n");
        return 1;
    }
}

void insert(node **root, int index, int data) {
    node *t;
    if (index > 0) {
        int i = 0;
        t = *root;
        while (t->next && i < index-1) {
            t = t->next;
            i++;
        }
        if (t->next) {
            node *tt = t->next;
            t->next = (node*) malloc(sizeof(node));
            t = t->next;
            t->data = data;
            t->next = tt;
        } else {
            printf("Index out of bounds");
        }
    } else {
        t = (node*) malloc(sizeof(node));
        t->data = data;
        t->next = *root;
        *root = t;
    }
}

void remove(node **root, int index) {
    node *t;
    if (index > 0) {
        int i = 0;
        t = *root;
        while (t->next && i < index-1) {
            t = t->next;
            i++;
        }
        if (t->next) {
            node *tt = t->next->next;
            free(t->next);
            t->next = tt;
        } else {
            printf("Index out of bounds");
        }
    } else {
        t = (*root)->next;
        free(*root);
        *root = t;
    }
}

int find(node* root, int data) {
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