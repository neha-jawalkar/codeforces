#include <iostream>

using namespace std;

int main()
{
    long long t,x,y,z1,z2,z,a,b,hops;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>a>>b;
        z1 = a*y + b*x;
        // cout<<z1<<endl;
        z2 = a + b;
        // cout<<z2<<endl;
        // cout << z1/z2 << endl;
        z = z1/z2;
        hops = z1 % z2 ? -1 : (z- x)%a ? -1 : (z - x)/a;
        cout<<hops<<endl;
    }
    return 0;
}