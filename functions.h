#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "list.h"

void add(node**, int data);
bool is_empty(node*);
int size(node*);
int get(node*, int index);
void insert(node**, int index, int data);
void remove(node**, int index);
int find(node*, int data);
void print(node*);

#endif