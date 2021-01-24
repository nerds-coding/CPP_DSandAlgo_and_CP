#include <iostream>
#include <cmath>
#include <utility>
using namespace std;

#define ll long long
#define dd double
#define prs pair<ll, ll>

dd square(dd a)
{
    return a * a;
}

dd sidesOfTriangle(prs a, prs b)
{
    return sqrt((square(abs(a.first - b.first))) + (square(abs(a.second - b.second))));
}

int angleOfTriangle(dd a,dd b,dd c){
    dd angle = acos(abs((square(a)+square(b)-square(c))/2*a*b));

    angle = (angle*180)/3.145;
    int degree = (int)round(angle);

    return degree;
}


int main()
{

    ll n, triangles = 0;
    cin >> n;

    while (n--)
    {
        prs a, b, c;
        cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;

        dd side_a = sidesOfTriangle(b, c);
        dd side_b = sidesOfTriangle(a, c);
        dd side_c = sidesOfTriangle(a, b);

        if((angleOfTriangle(side_b,side_c,side_a) == 90) || (angleOfTriangle(side_a,side_c,side_b)== 90) || (angleOfTriangle(side_a,side_b,side_c)==90)){
            triangles++;
        }

    }

    cout<<triangles<<endl;

    return 0;
}