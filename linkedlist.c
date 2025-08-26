#include<stdio.h> // linkedlist implemented in C
#include<stdlib.h>
//create a node
struct node{
    int data;
    structnode*next;
}
//print the value of Linkedlist
void printLinkedlist(structnode*p)
{
  while(p!=NULL)
  {
    printf("%d",p->data)
    p=p->next;
  }
}
//init node for initialise
int main()
{ 
    structnode*head;
    structnode*one=NULL;
    structnode*two=NULL;
    structnode*three=NULL;

 //allocate the memory

 one=malloc(sizeof(structnode));
 two=malloc(sizeof(structnode));
 three=malloc(sizeof(structnode));
 //assign the data values
 one->data=1;
 two->data=2;
 three->=3;
//connect the nodes with eachother  
 one->next=two;
 two->next=three;
 three->next=NULL;
 //printing the node values
 head=one;
 printLinkedlist(head);
}   
    


