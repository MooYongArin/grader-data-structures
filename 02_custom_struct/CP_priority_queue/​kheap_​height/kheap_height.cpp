#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0); 
    int n, k, height = 0;
    cin >> n >> k;
    n--;
    if (k == 1)
    {
        cout << n;
        return 0;
    }
    
    while (n > 0)
    {
        if (n%k == 0)
        {
            n--;
        }
        
        n /= k;
        // cout << n;
        height += 1;
    }
    std::cout << height;
    return 0;
}