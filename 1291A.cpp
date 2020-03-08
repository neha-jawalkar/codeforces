#include <iostream>

using namespace std;

int main()
{
    int t,n,sum,li;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        char a[n];
        sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            sum+=(a[j]-'0');
        }
        li=n-1;
        if(sum%2) for(;li>=0 && !((a[li--]-'0')%2););
        if(li < 0) 
        {
            cout<<-1<<endl;
            continue;
        }
        if(!((a[li]-'0')%2)) for(;li>=0 && !((a[li]-'0')%2);li--);
        if(li < 0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int j=0;j<=li;j++) cout<<a[j];
        cout<<endl;
    }

    return 0;
}