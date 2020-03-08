#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a, even = 0, odd1 = 0, odd2 = 0, done = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (!done)
            {
                if (a % 2)
                {
                    if (!odd1)
                        odd1 = j + 1;
                    else
                    {
                        odd2 = j + 1;
                        cout << "2\n"
                             << odd1 << " " << odd2 << endl;
                        done = 1;
                    }
                }
                else
                {
                    cout << "1\n"
                         << j + 1 << endl;
                    done = 1;
                }
            }
        }
        if (!done)
            cout << -1 << endl;
    }
    return 0;
}