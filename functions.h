#pragma once

#include "list.h"

void append(node**, int);
void push(node**, int);
void insertAfter(node**, int pos, int value);
void delete_position(node**, int pos);
void delete_first(node**);
void delete_last(node**);
int size(node*);
int get(node*, int index);
int find(node*, int data);
void display(node*);
