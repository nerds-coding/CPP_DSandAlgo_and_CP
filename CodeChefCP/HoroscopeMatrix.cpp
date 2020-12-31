#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        int a[n][m];

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>a[i][j];
            }
        }

        for(int i = 1;i<n;i++){
            for(int j = 1;j<m;j++){
                count+=(a[i-1][j-1]!=a[i][j]);
            }
        }

    int q, x, y, v;
    cin >> q;
    while(q--)
    {
        cin >> x >> y >> v;
        x--, y--;
        if(x - 1 >= 0 and y - 1 >= 0)
            count -= (a[x][y] != a[x - 1][y - 1]);
        if(x + 1 < n and y + 1 < m)
            count -= (a[x][y] != a[x + 1][y + 1]);
        a[x][y] = v;
        if(x - 1 >= 0 and y - 1 >= 0)
            count += (a[x][y] != a[x - 1][y - 1]);
        if(x + 1 < n and y + 1 < m)
            count += (a[x][y] != a[x + 1][y + 1]);
        cout << (count == 0 ? "YES" : "NO") << endl;
	}

    }

    return 0;
}