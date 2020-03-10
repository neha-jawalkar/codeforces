#include <iostream>
#include <list>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, u, v, k, s, t;
    cin >> n >> m;
    n++;
    list<int> IN[n];
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        IN[v].push_back(u);
    }
    cin >> k;
    int p[k];
    for (int i = 0; i < k; i++)
        cin >> p[i];
    s = p[0];
    t = p[k - 1];
    list<int> q;
    list<int> next_node[n];
    int dist[n];
    bool visited[n];
    for (int i = 1; i <= n; i++)
    {
        visited[i] = false;
        dist[i] = -1;
    }
    q.push_back(t);
    visited[t] = true;
    dist[t] = 0;
    while (!q.empty())
    {
        u = q.front();
        q.pop_front();
        for (auto const &v : IN[u])
        {
            if (dist[v] == -1 || dist[v] == dist[u] + 1)
            {
                dist[v] = dist[u] + 1;
                next_node[v].push_back(u);
            }
            if (!visited[v])
            {
                q.push_back(v);
                visited[v] = true;
            }
        }
    }
    for (int u = 1; u < n; u++)
        next_node[u].sort();
    int min = 0, max = 0;
    for (int i = 0; i < k - 1; i++)
    {
        list<int> l = next_node[p[i]];
        if (binary_search(l.begin(), l.end(), p[i + 1]))
        {
            if (l.size() > 1)
                max++;
        }
        else
        {
            min++;
            max++;
        }
    }
    cout << min << " " << max << endl;
    return 0;
}