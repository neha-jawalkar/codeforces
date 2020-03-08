#include <iostream>

using namespace std;

int main()
{
    int t, n, odd, even, sum;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        sum = 0, odd = 0, even = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
            if ((a[j] % 2) && !odd)
                odd = 1;
            else if (!(a[j] % 2) && !even)
                even = 1;
        }
        if ((sum % 2) || (!(sum % 2) && odd && even))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}