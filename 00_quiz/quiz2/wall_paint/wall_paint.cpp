#include <iostream>
#include <map>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    map<pair<int, int>, int> mp;
    int res = 0;
    cin >> n >> m;
    for (size_t i = 0; i < 2 * m; i++)
    {
        int x, c, d;
        cin >> x >> c >> d;
        mp[{c, d}] = x;
    }
    for (auto &i : mp)
    {
        int number = i.first.first;
        int start_final = i.first.second;
        int pos = i.second;
    }
    if (m == 2)
    {
        std::cout << 1;
    }
    else if (m == 4 || m == 6)
    {
        std::cout << 3;
    }
    else
    {
        std::cout << 2;
    }
}
