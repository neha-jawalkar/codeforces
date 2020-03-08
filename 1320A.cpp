#include <iostream>
#include <map>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int b[n];
    // for (int i = 0; i < n; i++)
    //     cin >> b[i];
    // int dp[n], m;
    // dp[0] = b[0];
    // m = dp[0];
    // for (int i = 1; i < n; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < i; j++) if((i - j) == (b[i] - b[j])) k = max(k, dp[j]);
    //     dp[i] = k + b[i];
    //     m = max(m, dp[i]);
    // }
    // cout<<m<<endl;
    // return 0;
    int n;
    cin >> n;
    int b, mb = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        auto iter = m.find(i - b);
        if (iter == m.end())
            m[i - b] = b;
        else
            m[i - b] += b;
        mb = max(mb, m[i - b]);
    }
    cout << mb << endl;
}