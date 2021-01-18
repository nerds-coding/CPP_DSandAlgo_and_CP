#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;

    Node(int val){ // constructor of Structure
        value = val;
        left = NULL;
        right = NULL;
    }
};

int main(){

    struct Node* tree = new Node(40);
    tree->left = new Node(30);
    tree->right = new Node(50);

    return 0;
}