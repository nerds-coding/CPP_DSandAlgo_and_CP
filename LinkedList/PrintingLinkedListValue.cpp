#include<iostream>
using namespace std;

class Node{

    public:
            int data;
            Node* next;

};

void LLValue(Node* n){
    Node* temp = n;
    while (temp)
    {
        cout<<temp->data<<endl;
        temp = temp->next; 
    }
    
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

    LLValue(head);

    return 0;
}