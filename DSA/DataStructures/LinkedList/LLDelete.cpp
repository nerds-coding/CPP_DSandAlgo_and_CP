#include<iostream>
using namespace std;

class Node{
    public:
            int data;
            Node* next;
};

void insert(Node* n,int value){
    Node* temp = n;
    while (temp->next)
    {
        temp = temp->next;
    }

    Node* new_data = new Node();
    new_data->data = value;
    new_data->next = NULL;

    temp->next = new_data;
    
}

void display(Node* n){
    Node* temp = n;

    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void deleteEnd(Node* n){
    Node* temp =n , *second_last;

    while (temp->next)
    {
        second_last = temp;
        temp = temp->next;
    }

    second_last->next = NULL;
}

Node* deleteBegin(Node* n){
    return n->next;
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

    deleteEnd(head);
    deleteEnd(head);
    deleteEnd(head);

    //deleteBegin(head);
    display(deleteBegin(head));

    return 0;
}