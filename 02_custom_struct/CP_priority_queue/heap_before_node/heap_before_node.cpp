#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);
    int n, m; 
    vector<int> to_print;
    int count = 0;
    set<int> s;
    cin >> n >> m;
    s.insert(m);
    int i = 0;
    while (i != n)
    {
        if (s.find((i-1)/2) != s.end())
        {
            s.insert(i);
            i++;
            continue;
        }
        if (i == m)
        {
            i++;
            continue;
        }
        
        to_print.push_back(i);
        // cout << i << " ";
        i++;
        count++;
    }
    cout << count << endl;
    for (auto &i : to_print)
    {
        cout << i << " ";
    }
    
    
    return 0;
}