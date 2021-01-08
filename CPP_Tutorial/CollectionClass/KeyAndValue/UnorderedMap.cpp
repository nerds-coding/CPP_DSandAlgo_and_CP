#include<iostream>
#include<unordered_map>
using namespace std;

// unordered_map have O(1) for insertion, iteration and deletion 

int main(){
    unordered_map<string,int> our_map;
    
    
    pair<string,int> p("Anup",1);

    // old way to insert into unordered map
    our_map.insert(p);

    // new way to insert into map
    our_map["Hello"] = 99;

    // to print/access value of map
    cout<<our_map["Hello"]<<endl;
    
    // to find value key of any key we can also use 
    cout<<our_map.at("Hello")<<endl;
    // if a value is already present in the map 
    // at keyword will return the value of defined key
    // but if the value is not present at the key then it throughs error
    

    // direct acces like
    // our_map["KK"]
    // if the key is present, then it return the value
    // but, if the key is not present 
    // then it will initialize the key and put a default value 0 at key like
    cout<<our_map["KK"]<<endl; // this key will be initialzed by the direct access method


    // so if we Only want to check that a key is present or not 
    // we should use count keyword
    // it return 1 if present else 0
    // 1 because, a key cannot be duplicate
    if(our_map.count("JJ")){
        cout<<"JJ is present"<<endl;
    }else{
        cout<<"JJ in been not initalized"<<endl;
    }

    // to check the size of the unordered map 
    cout<<our_map.size()<<endl;

    // to erase only one targeted value 
    cout<<our_map.erase("KK")<<endl;

    cout<<our_map.size()<<endl;// KK is been erased 

    // to iterate the value of each key we use first for key and second for value
    // it no indexed collection thus on each iteration the pair will be shuffled
    for(auto x: our_map){
        cout<<x.first<<"  "<<x.second<<endl; 
    }

    our_map.clear();// to delete all the value from the map
    cout<<our_map.size()<<endl;


    return 0;
}