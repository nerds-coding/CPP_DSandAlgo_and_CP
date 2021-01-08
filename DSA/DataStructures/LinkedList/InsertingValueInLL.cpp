#include<iostream>
using namespace std;

class Node{
    public:
            int data;
            Node* next;

};

void printList(Node* n){
    Node* temp = n;
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

void insertValue(int value,Node* n){
    Node* temp = n;
    while(temp->next){
        temp = temp->next;
    }
    Node* d = new Node();
    d->data = value;
    d->next = NULL;
    temp->next = d;   
}

int main(){

    Node * head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    insertValue(4,head);

    printList(head);

    return 0;
}