#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int distance, mini, p, ans;
    vector<int> a;
    mini = 1000000000;
    cin >> p;
    sort(a.begin(), a.end());
    
    for (size_t i = 0; i < a.size(); i++)
    {
        distance = p-a[i];
        if (abs(distance) < abs(mini))
        {
            mini = distance;
            ans = a[i];
        } else if (abs(distance) == abs(mini)){
            if (a[i] > ans)
            {
                ans = a[i];
            }
            
        } else {
            break;
        }
        
    }
    
    return 0;
}
// g++ tutorial.cpp -o hello-file