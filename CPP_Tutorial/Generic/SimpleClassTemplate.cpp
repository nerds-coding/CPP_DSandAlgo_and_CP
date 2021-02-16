#include <iostream>
#include <vector>
using namespace std;


template<typename T>
class Calculator{
    private:
        T num1,num2;
    
    public:
        Calculator(T n1, T n2){
            this->num1 = n1;
            this->num2 = n2;
        }

        T Add(){
            return this->num1+this->num2;
        }

        T divide(){
            return this->num1/this->num2;
        }

        T multiply(){
            return this->num1*this->num2;
        }

        T subtract(){
            return this->num1-this->num2;
        }
};


int main()
{

    Calculator<int> cal(55,6); // to call a generic class we should 
    // use <data-type> just like 
    // array, vector and etc;
    
    cout<<"Addition of Number = "<<cal.Add()<<endl;
    cout<<"Subtraction of Number = "<<cal.subtract()<<endl;
    cout<<"Multiplication of Number = "<<cal.multiply()<<endl;
    cout<<"Division of Number = "<<cal.divide()<<endl;
    
    return 0;
}