#include<iostream>
using namespace std;

class Node{
    public:
            int data;
            Node* next;
};

void insert(Node* n,int value){

    Node* temp = n;
    while(temp->next){
        temp = temp->next;
    }

    Node* new_value = new Node();
    new_value->data = value;
    new_value->next = NULL;

    temp->next = new_value;
}

void display(Node* n){

    Node* temp = n;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void reverseList(Node* n){
    if(n == NULL){
        return;
    }

    Node* temp;
    Node* rev = n;
    Node* temp_node = n->next;
    rev->next = NULL;
    

    while(temp_node->next){ 
        temp = temp_node;
        temp->next = rev;
        rev = temp;
        temp_node = temp_node->next;
    }

}

int main(){

    Node* head = new Node();

    head->data = 1;
    head->next = NULL;

    
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);

    reverseList(head);

    display(head);



    return 0;
}