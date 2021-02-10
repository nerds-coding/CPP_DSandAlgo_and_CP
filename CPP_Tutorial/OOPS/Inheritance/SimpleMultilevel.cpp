#include <iostream>
#include <vector>
using namespace std;

class Phone{

    private:
        int price = 100;

    protected:
        void modelName(){
            cout<<"By default Model = Nokia\n";
        }
};

class Samsung:public Phone{
    
    public:
    void smartPhone(){
       // cout<<price<<endl;// we cannot access the "price" variable cause it is private
       modelName(); // it is protected
    }
};

class camera:protected Samsung{

    public:
        void qualit(){
            cout<<"12MP of ";
            modelName();
            smartPhone();
        }

};

int main()
{

    // Samsung sam;
    // sam.smartPhone();

    camera cam;
    cam.qualit();
    return 0;
}

/*
The private member is not inheritable. If we modify the visibility 
mode by making it public, but this takes away the advantage of data hiding.

C++ introduces a third visibility modifier, i.e., protected. 
The member which is declared as protected will be accessible to all 
the member functions within the class as well as the class immediately derived from it.




Public: When the member is declared as public, it is accessible
to all the functions of the program.

Private: When the member is declared as private, it is accessible within the class only.

Protected: When the member is declared as protected, it is accessible within its 
own class as well as the class immediately derived from it.
*/