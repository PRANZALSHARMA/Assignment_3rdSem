/*
                                                  PRANZAL SHARMA
                                                  21105048
                                                  ECE
                                                  
                                                  CIRCULAR LINKED LIST ASSIGNMENT
*/


/*

                          ANSWER 1:-       LINE 36

*/
#include <iostream>
using namespace std;
//Creating Node class
class Node{
    
    public:
    int data;
    Node*next;
   
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//Function to insert a node
void append(Node*&head,int data){
    Node*temp=head;
    Node*new_node=new Node(data);
    if(temp==NULL){head=new_node;new_node->next=head;return;}
  
  
    while(temp->next!=head){temp=temp->next;}   //<h2>This condition establishes that the traversing element(temp) has reached the first element</h2>
    
  
    temp->next=new_node;
    new_node->next=head;
}
//Function to print elements
void printfun(Node*&head){
    Node*temp=head;
    do{cout<<temp->data<<"->";temp=temp->next;}
    while(temp!=head);
}

int main(){
    Node*head=NULL;
    append(head,1);
    append(head,2);
    append(head,3);
    printfun(head);
}


/*

                    ANSWER 2:- 
    
    Application of Circular Linked Lists:
        Circular Linked Lists can be used to manage the computing resources of the computer.
        Data structures such as stacks and queues are implemented with the help of the circular linked lists.
        Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
        It is also used in computer networking for token scheduling.
        
    Real-Life Application of Circular Linked Lists:
        Round Robin scheduling technique in games.
        Audio/Video Streaming
        Circular Escalators

*/
