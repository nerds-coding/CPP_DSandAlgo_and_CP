#include<iostream>
using namespace std;

int extendedGcd(int a, int b){
    if(b == 0){
        return a;
    }
    return extendedGcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(extendedGcd(a,b)%c==0){
            cout<<"Case "<<t+1<<": Yes"<<endl;
        }else{
            cout<<"Case "<<t+1<<": No"<<endl;
        }
    }    

    return 0;
}






/* it is same as Euclidean Extended algorithm 
but the gcd is provided here and 
we also calculate the gcd of the given numbers 
and if the calculated gcd % given gcd ==0 then there
is x and y exists otherwise not.
*/

