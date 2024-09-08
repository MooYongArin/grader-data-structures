#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> t(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; ++i)
    {
        pq.push({t[i], i});
        cout << 0 << "\n";
    }

    // m -= n;
    for (int i = n; i < m; ++i)
    {
        pair<int, int> chef = pq.top();
        pq.pop();

        int timer = chef.first;
        int index = chef.second;

        cout << timer << "\n";

        pq.push({timer + t[index], index});
    }
}