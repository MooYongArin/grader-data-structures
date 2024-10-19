#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    int n,a;
    queue<int> q;
    int main, left, right;
    vector<int> res;
    cin >> n >> a;
    q.push(a);
    while (!q.empty())
    {
        main = q.front();
        left = main*2 + 1;
        right = main*2 + 2;
        if (left < n)
        {
            q.push(left);
        }
        if (right < n)
        {
            q.push(right);
        }
        res.push_back(main);
        // cout << q.size() << endl;
        q.pop();
    }
    
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for (auto &i : res)
    {
        cout << i << " ";
    }
    
    
    return 0;
}