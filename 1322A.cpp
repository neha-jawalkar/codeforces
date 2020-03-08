#include <iostream>

using namespace std;

int main()
{
    int n, left = 0, right = 0, corrupt = 0, tot = 0;
    cin >> n;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == '(')
            left++;
        else
            right++;
        if (right > left && !corrupt)
            corrupt = 1;
        else if (right == left)
        {
            if (corrupt)
            {
                tot += (2 * left);
                corrupt = 0;
            }
            left = 0;
            right = 0;
        }
        // cout << left << " " << right << " " << corrupt << " " << tot << endl;
    }
    if (left || right)
        cout << -1 << endl;
    else
        cout << tot << endl;
    return 0;
}