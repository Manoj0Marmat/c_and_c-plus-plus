#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//create node
struct Node{
    char name[10];
    char symb[4];
    float weight;
    struct Node *next;
};
struct Node* head;

//insert node with element name, symb and weight
void insert(char name[10],char symb[4],float weight){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    strcpy(temp->name, name);
    strcpy(temp->symb, symb);
    temp->weight=weight;
    temp->next=head;
    head=temp;
};

//print elements 
void printl(struct Node *node){
    printf("\n%-10s %-7s %-10s\n\n","Name","Symb.","Atomic Weight");
    while(node!=NULL){
        printf("%-10s -%-5s -at.wt %-10f\n",node->name, node->symb,node->weight);
        node = node->next;
    }
}

int main(void){
    //head 
    head = NULL;
    printf("Enter first 10 Elements  name, symb and weight\n");
    //variables to store element data
    char name[10],symb[4];
    float weight;
    //get 10 input of element data from user
    for(int i=0;i<10;++i){
        //input Ex. Hydrogen H 1.008000
        scanf("%s %s %f",name, symb, &weight);
        insert(name, symb, weight);
    }
    //print elements data in reverse order
    printl(head);

    return 0;
}
