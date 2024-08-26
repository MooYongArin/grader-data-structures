#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n, m, k;
    vector<int> v;
    // set<int> s;
    cin >> n >> m >> k;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        // s.insert(a);
    } 
    for (size_t i = 0; i < m; i++)
    {
        int p;
        int count;
        cin >> p;
        // cout << "p = " << p << endl;
        // for (int val : s)
        // {
        //     if (val >= p-k && val <= p+k)
        //     {
        //         count += 1;
        //     }
        // }
        // for (size_t j = p-k; j <= p+k; j++)
        // {
        //     if (s.find(j) != s.end())
        //     {
        //         count += 1;
        //     }
        // }

        sort(v.begin(), v.end());
        auto start = lower_bound(v.begin(), v.end(), p - k);
        auto end = upper_bound(v.begin(), v.end(), p + k);
        count = distance(start, end);

        cout << count << " ";
    }
    
    
    
}