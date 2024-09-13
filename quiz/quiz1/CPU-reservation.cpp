#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>


using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int n;
    queue<pair<int, int>> q;
    set<int> end_q;
    set<int> start_q;
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        int ai,bi;
        cin >> ai >> bi;
        q.push({ai,bi});
    }
    int current_queue = 1;
    int end_queue = q.front().second;
    cout << 1 << " ";
    while (!q.empty())
    {
        // int start_queue = q.front().first;
        // int end_queue = q.front().second;
        end_q.insert(q.front().second);
        start_q.insert(q.front().first);
        // cout << " end: " << end_queue << endl;
        q.pop();
        current_queue++;
        if (current_queue > n)
        {
            break;
        }
        
        if (q.front().first > end_queue || (*lower_bound(start_q.begin(), start_q.end(), q.front().second) > q.front().second && *(--lower_bound(end_q.begin(), end_q.end(), q.front().first)) > q.front().first  ))
        {
            cout << current_queue << " ";
            end_queue = q.front().second;
        }
        
    }
    
    
    return 0;
}
