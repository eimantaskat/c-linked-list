#include "functions.h"
#include "list.h"

int main () {
    node* root = NULL;

    add(&root, 4);
    add(&root, 3);
    add(&root, 7);
    add(&root, 12);
    // printf("Size: %d\n", size(root));
    // printf(is_empty(root) ? "Empty\n" : "Not empty\n");
    // printf("Element: %d\n", get(root, 7));
    insert(&root, 3, 99);
    remove(&root, 1);
    printf("Found with index: %d\n", find(root, 5));
    print(root);
    
}