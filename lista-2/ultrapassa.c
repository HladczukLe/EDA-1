#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int data;
    struct _node *next;
} Node;

void append(Node **head, int value){
    Node *newNode = (Node *) calloc(1, sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
}