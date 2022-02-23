# ifndef FUNCTIONS_H
# define FUNCTIONS_H

struct node {
   int data;
   node *next;
};

typedef struct node node;

void print(node* root);

# endif