#include <iostream>
#include <vector>
using namespace std;

class Phone{
    public:
        int price;

        void mobile(){
            cout<<"This is simple Mobile\n";
        }
};

class Samsung:public Phone{

    public:
        string model;

        void smartPhone(){
            cout<<"This is simple smart Phone\n";
        }
};


int main()
{

    Samsung sam;
    sam.price = 100;
    sam.model = "M51";

    cout<<"Price of Phone = "<<sam.price<<endl;
    cout << "Price of Phone = " << sam.model << endl;
    
    
    sam.mobile();
    sam.smartPhone();


    return 0;
}

/*class derived_class_name :: visibility-mode base_class_name  
{  
    // body of the derived class.  
}  
Where,

derived_class_name: It is the name of the derived class.

visibility mode: The visibility mode specifies whether the features of 
the base class are publicly inherited or privately inherited. 
It can be public or private.

base_class_name: It is the name of the base class.

When the base class is privately inherited by the derived class, 
public members of the base class becomes the private members of the derived class. 
Therefore, the public members of the base class are not accessible by the objects 
of the derived class only by the member functions of the derived class.
When the base class is publicly inherited by the derived class, 
public members of the base class also become the public members of the derived class. 
Therefore, the public members of the base class are accessible by the objects of 
the derived class as well as by the member functions of the base class.*/