/*
                            PRANZAL SHARMA
                            21105048
                            ECE
                            
                            FAMILY LINKED LIST
*/





#include <iostream>                   
using namespace std;                  


class Node{
    public:
    
    string name;
    int age;
    Node*next; 
    Node*prev; 
    
    Node(string name,int age){
        this->name=name;
        this->age=age;
        next=NULL; 
        prev=NULL; 
    }
};

//TO INSERT DATA
void append(Node* &head,string name,int age){
    
    Node*temp=head;
    
    Node*new_node=new Node(name,age);
    
    if(temp==NULL){
        head=new_node;
    }
    
    else{
        while(temp->next!=NULL){temp=temp->next;}
        temp->next=new_node;
        new_node->prev=temp;
    }
}


//DISPLAY DATA
void display_from_start(Node*head){
    Node*temp=head;
    while(temp!=NULL){cout<<"[Name:"<<temp->name<<" Age:"<<temp->age<<"]"<<"<=>";temp=temp->next;}
    cout<<endl;
}


//TO DELETE ANY INDEX EXCLUDING LAST ELEMENT
void delete_ind(Node*&head,int i){
    if(i==0){
        Node*temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
    }
    else{
        Node*temp=head;
        for(int j=0;j<i;j++){temp=temp->next;}
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
    }
}

//DELETE LAST ELEMENT
void pop(Node*&head){
    Node*temp=head;
    while(temp->next!=NULL){temp=temp->next;}
    temp->prev->next=NULL;
    delete temp;
}

int main(){
    
    Node*head=NULL;
	int no_of_family_mem;
    
	cout<<"Enter Number Of Family Members:";
	cin>>no_of_family_mem;
    
	for(int i=1;i<=no_of_family_mem;i++){
		string name;
		int age;
		cout<<"Enter Family Member "<<i<<" Name:";cin.ignore();getline(cin,name);
		cout<<"Enter Family Member "<<i<<" Age:";cin>>age;
        
		append(head,name,age);
	}
    cout<<endl;
    
    cout<<"Doubly Linked list with my family members as elements is shown below:"<<endl;
    
    display_from_start(head);
}


