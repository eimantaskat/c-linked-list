#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   node *next;
};

typedef struct node node;

#endif