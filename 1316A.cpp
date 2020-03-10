#include <iostream>

using namespace std;

int main()
{
    int t, n, m, a, x, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        y = 0;
        cin >> a;
        x = m - a;
        for (int j = 1; j < n; j++)
        {
            cin >> a;
            if (y < x)
                y += a;
        }
        cout << min(m, m - x + y) << endl;
    }
    return 0;
}