#include "functions.h"
#include "list.h"

int main() {
    node* root = NULL;
    append(&root, 6);
    push(&root, 7);
    push(&root, 1);
    append(&root, 4);
    insertAfter(&root, 2, 8);
    delete_first(&root);
    delete_last(&root);
    display(root);
}