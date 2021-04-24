/*
    Name: Paul Talaga
    Date: April 19, 2020
    Desc: Linked-list example
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct node_t{
    int value;
    struct node_t* next;
} typedef node_t;

// Prints all values in the linked list, until a null pointer is found
void print(node_t* n){
    int i = 0;
    while(n != NULL){
        printf("%d: %d \n",i,  n->value); // (*n).value
        i++;
        n = n->next;
    }
}

// Inserts a new node storing value v in the 2nd location in the linked-list.
void insert(node_t* n, int v){
    node_t* new_box = (node_t*)malloc(sizeof(node_t));
    new_box->value = v;
    new_box->next = n->next;
    n->next = new_box;
}

// free all memory used in the linked-list
void giveBack(node_t* n){
    while(n != NULL){
        node_t* temp = n->next;
        free(n);
        n = temp;
    }
}

int main(){
   // Example to create nodes on the stack
   /*node_t root = {1,NULL};
   node_t other = {6,NULL};
   root.next = &other;
   */
   // Create nodes on the heap (dynamic memory), so 
   // giveBack can work correctly.
   node_t* root = (node_t*)malloc(sizeof(node_t));
   root->value = 1;
   node_t* other = (node_t*)malloc(sizeof(node_t));
   other->value = 6;
   root->next = other;
   other->next = NULL;
   
   insert(root, 67);
   insert(root, 12);
   
   print(root);
   
   giveBack(root);
    
    return 0;
}