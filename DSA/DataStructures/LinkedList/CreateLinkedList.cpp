#include<iostream>
using namespace std;

class Node{
    public:
        //int data = 3; initializing value in class is not allowed it must be done under constructor or function;
        int data;
        Node* next; // we are making pointer to store the address of next LL and 
        // and return type is of Node class it self because we point to class type of address 
        // it can't be int or string or double;
};

int main(){
    Node* head;// we are just making pointer to store data of Node class type
    Node* second = new Node();
    Node* third = new Node();

    head = new Node();// making object of Node class in head pointer
    

    head->data = 1;// we use -> because we are referring a class value/member with pointer
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;


    return 0;
}