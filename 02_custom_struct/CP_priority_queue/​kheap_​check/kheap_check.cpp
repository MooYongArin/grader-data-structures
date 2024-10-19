#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool isK_ary(int k, vector<int> v){
    queue<int> q;
    bool isBreak = false;
    q.push(0);
    while (!q.empty() && !isBreak)
    {
        int idx = q.front();
        for (size_t j = 1; j <= k; j++)
        {
            int node_idx = k*idx + j;
            if(node_idx < v.size()){
                // cout << v[node_idx] << " " << v[idx] << endl;
                if(v[node_idx] > v[idx]) 
                    return false;
                q.push(node_idx);
            } else {
                isBreak = true;
                break;
            }
        }
        q.pop();
    }
    return true;
    
}

int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);
    int m, n, k;
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        cin >> n >> k;
        vector<int> v(n);
        for (size_t j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        if (isK_ary(k,v))
        {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
    
    return 0;
}