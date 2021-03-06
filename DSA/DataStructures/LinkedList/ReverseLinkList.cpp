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

Node* reverseList(Node* n){
    if(n == NULL){
        return NULL;
    }
    Node* prev = NULL, *nt = NULL;
    Node* cur = n;

    while(cur){
        nt = cur->next;

        cur->next = prev;
        prev = cur;
        cur = nt;
    }

    return prev;
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

    display(reverseList(head));



    return 0;
}