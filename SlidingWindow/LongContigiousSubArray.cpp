#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string user_str;
    cout<<"Enter the string "<<endl;
    cin>>user_str;

    int j,ans = 0;
    int len = user_str.length();
    unordered_map<string,int> str_map;

    for(int i = 0;i<len;i++){
        if(str_map.count(user_str.substr(i,1))==1){// to check that string is already present or not, if present than bring the 
        //j(contigious sub-sequence counter) to the next index of the previsouly present char
            j = max(str_map[user_str.substr(i,1)],j); // abacda, let i = 2 then j = 1
        }

        ans  = max(ans,i-j+1);// we subtract the j from current index to find the contigious subarray 
        // example abcdefabc, let j = 6 then i = 1 thus ans = 6(because of +1)
        str_map[user_str.substr(i,1)] = i+1; // after performing the above operation we update the most
        // recent occured char index the key in map
    }
    cout<<ans<<endl;

    return 0;
}



//https://leetcode.com/problems/longest-substring-without-repeating-characters/solution/
