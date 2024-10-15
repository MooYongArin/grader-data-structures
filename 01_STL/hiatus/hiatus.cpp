#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m;
    vector<pair<int, int>> v;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        int year, month;
        cin >> year >> month;
        v.push_back({year, month});
        
    }
    sort(v.begin(), v.end());
    for (size_t i = 0; i < m; i++)
    {
        int qyear, qmonth;
        cin >> qyear >> qmonth;

        pair<int ,int> p1;
        p1.first = qyear;
        p1.second = qmonth;
        auto it = lower_bound(v.begin(), v.end(), p1);
        // cout << it->first << " " << it->second << " ";
        if ((*(it)).first == qyear && (*(it)).second == qmonth)
        {
            cout << 0 << " " << 0 << " ";
        } else if (it == v.begin()) {
            cout << -1 << " " << -1 << " ";
        } else {
            cout << (it-1)->first << " " << (it-1)->second << " ";
        }
        
    }
    
    
}