#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    map<int, int> mp;
    vector<pair<int, int>> v;
    int n, m;

    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        pair<int, int> p;
        // a, b
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for (size_t i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        pair<int ,int> p1;
        p1.first = q+1;
        auto it = lower_bound(v.begin(), v.end(), p1);

        // set ไม่ทับกันเลย !!!! 
        if (it != v.begin() && prev(it)->first <= q && q <= prev(it)->second)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}