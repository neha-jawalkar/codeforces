#include <iostream>

using namespace std;

int main()
{
    int t,n,d;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>d;
        int a[n],h;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(j==0) h=a[j];
            else if(d>0) 
            { 
                int temp=min(a[j],d/j);
                h+=temp;
                d = d/j ? d - j*temp : 0;
            } //each bale needs exactly j days to travel to the first pile 
        }
        cout<<h<<endl;
    }
    return 0;
}