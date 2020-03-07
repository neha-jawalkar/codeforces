#include <iostream>

using namespace std;

int main()
{
    int t,a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>x>>y;
        int area = a*y;
        // cout<<a<<" x "<<y<<endl;
        area = max(area, (a-x-1)*b);
        // cout<<a-x-1<<" x "<<b<<endl;
        area = max(area, a*(b-y-1));
        // cout<<a<<" x "<<b-y-1<<endl;
        area = max(area, x*b);
        // cout<<x<<" x "<<b<<endl;
        cout<<area<<endl;
    }
    return 0;
}