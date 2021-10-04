#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

//struct Node *top=NULL;

void push(int element){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp == NULL)
        return;
    temp->data = element;
    temp->next = top;
    top = temp;
}
int pop(){
    struct Node *temp;
    if(top==NULL)
        return -1;
    temp = top;
    top = top->next;
    int x = temp->data;
    free(temp);
    return x;
}

void Display(){
    struct Node *temp;
    temp = top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}


int main()
{
    push(10);
    push(100);
    push(1000);
    push(10000);
    pop();
    pop();
    pop();
    pop();
    pop();
    Display();
    return 0;
}
