#include<iostream>
#include<stdlib.h>
using namespace std;

// stuctures are like data class of kotlin
struct details
{
    int id;
    char name[50];
};



int main(){

    struct details *p; // make pointer p of struct details data type

    p = (struct details *)malloc(5*sizeof(struct details));

    cout<<"Enter name "<<endl;
    for(int i = 0;i<5;i++){
        p[i].id = i; 
        cin>>p[i].name;

    }

    cout<<endl;
    cout<<endl;

    for(int i = 0;i<5;i++){
        cout<<(p[i].id)<<"  ";
        cout<<(p[i].name)<<endl;
    }

    free(p);
    

    return 0;
}