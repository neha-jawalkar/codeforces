#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, k, cur, prev = 0, count = 0;
    cin >> n >> m >> k;
    // int AUXA[40001] = {0};
    // int AUXB[40001] = {0};
    vector<int> AUXA(n+1,0);
    vector<int> AUXB(m+1,0);
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
            cin >> cur;
        else
            cur = 0;
        if (cur)
            count++;
        else
        {
            if (prev)
            {
                for (int j = 1; j <= count; j++)
                    AUXA[j] += (count - j + 1);
                count = 0;
            }
        }
        prev = cur;
    }
    count = 0, prev = 0;
    for (int i = 0; i <= m; i++)
    {
        if (i < m)
            cin >> cur;
        else
            cur = 0;
        if (cur)
            count++;
        else
        {
            if (prev)
            {
                for (int j = 1; j <= count; j++)
                    AUXB[j] += (count - j + 1);
                count = 0;
            }
        }
        prev = cur;
    }
    int num = 0;
    for (int i = 1; i <= k; i++)
    {
        if (!(k % i) && i <= n && k/i <= m)
        {
            num += (AUXA[i] * AUXB[k / i]);
        }
    }
    cout << num << endl;
    return 0;
}