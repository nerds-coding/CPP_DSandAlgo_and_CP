#include<iostream>
#include<vector>
using namespace std;


int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        int n,k,x,y=0;
        cin>>n>>k>>x>>y;

        vector< vector <int> > output;
        if(x==y){
            cout<<n<<" "<<n<<endl;
        }else{     
            if(x>y){
                vector<int> temp;
                temp.push_back(n);
                temp.push_back(y+n-x);
                output.insert(output.end(),temp);
                temp.clear();

                temp.push_back(y+n-x);
                temp.push_back(n);
                output.insert(output.end(),temp);
                temp.clear();

                temp.push_back(0);
                temp.push_back(x-y);
                output.insert(output.end(),temp);
                temp.clear();

                temp.push_back(x-y);
                temp.push_back(0);
                output.insert(output.end(),temp);
                temp.clear();
            }else{
                vector<int> temp;
                temp.push_back(x+n-y);
                temp.push_back(n);
                output.insert(output.end(),temp);
                temp.clear();
                
                temp.push_back(n);
                temp.push_back(x+n-y);
                output.insert(output.end(),temp);
                temp.clear();

                temp.push_back(y-x);
                temp.push_back(0);
                output.insert(output.end(),temp);
                temp.clear();

                temp.push_back(0);
                temp.push_back(y-x);
                output.insert(output.end(),temp);
                temp.clear();
            }

            vector<int> final(output[(k-1)%4]);
            
            cout<<final[0]<<" "<<final[1]<<endl;

        }
    }
    return 0;
}