#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
const int N = 1e5;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    vector<int> v(N);
    int n, m, start, a, s, p, x;
    cin >> n >> m >> start;
    while (n--)
    {
        cin >> a >> s;
        v[a] = s;
    }
    v[0] = start;
    for (int i = 1; i <= N; i++)
    {
        if (v[i] == 0)
        {
            v[i] = start;
        }
        else
        {
            start = v[i];
        }
        v[i] += v[i - 1];
    }

    while (m--)
    {
        cin >> p >> x;
        if (p <= v[x])
        {
            cout << lower_bound(v.begin(), v.end(), p) - v.begin() << " ";
        }
        else
        {
            cout << lower_bound(v.begin(), v.end(), p + v[x]) - v.begin() << " ";
        }
    }
    cout << "\n";
    return 0;
}
