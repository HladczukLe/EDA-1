#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
} Node;

void append(Node **list, int num){
    Node *aux, *new = malloc(sizeof(Node)); 

    if(new){ 
        new->value = num;
        new->next = NULL; 

        //é o primeiro?
        if(*list ==NULL){ 
            *list=new;
        }
        else{
            aux =  *list;
            while(aux->next){ 
                aux = aux->next;
            }
            aux ->next = new;
        }
    }
}
void appendFirst(Node **list, int num){
    Node *new = malloc(sizeof(Node));

    if(new){
        new->value = num;
        new->next = *list;
        *list = new;
    }
}
void printLinkedList(Node *node){
    while(node){
        printf("%d\n", node->value);
        node = node->next;
    }
}

void SumExceedingLimit(Node *node, int sumLimit) {
    Node *end = node;
    Node *list2 = NULL;
    int sum = 0;

    while (node) {
        sum += node->value;

        if (sum > sumLimit) {
            end = node;
            appendFirst(&list2, end->value);
            sum = 0;
        }
        

        node = node->next;
    }
    printLinkedList(list2);
}



void freeList(Node *node) {
    while (node) {
        Node *temp = node;
        node = node->next;
        free(temp);
    }
}

 int main(){
    int value, sumLimit;
    Node *list = NULL;

    do {
        scanf("%d", &value);
        append(&list, value);
    } while (value != 0);

    scanf("%d", &sumLimit);

    SumExceedingLimit(list, sumLimit);

    freeList(list);

    
    return 0;
 }