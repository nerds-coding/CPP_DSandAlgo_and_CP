#include <iostream>
#include <vector>
using namespace std;

// overloading of function doesn't depend of return type 
// it's soley depend on function name and signatures

int mul(int a,int b){
    return a*b;
}

float mul(double a,int b){// if we use float instead of double then it give ambigious error
// it is becasue all the floating point number are treated as double
    return a*b;
}


int main()
{

    cout<<"Multiplication of two Number = "<<mul(2,5)<<endl;

    cout << "Multiplication of two Number = " << mul(2.99, 5) << endl;
    return 0;
}


// RULES TO DEFINE OVERLOADING FUNCTION

// 1 - > Function should not contain default parameters
// 2 - > Declaring a function by calling it's reference (fun(int a) or fun(int &a)) 
//here compiler will get confuse and it will throw the ambigious error

// 3 - > Type conversion // like float and double

// Above all the rules are applicable for the class member functions