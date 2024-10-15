#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    map<int, int> mp_amount;
    bool isNo = false;
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        int d;
        cin >> d;

        // check repeated
        if (mp_amount.find(d) != mp_amount.end())
        {
            isNo = true;
            break;
        } else {
            mp_amount[d] = 1;
        }

        // out of range
        // cout << "n: " << n << " d: " << d << " isNo: " << (d >= 1 && d<=n) << endl;
        if (!(d >= 1 && d<=n))
        {
            isNo = true;
            break;
        }
        
    }
    
    if (isNo)
    {
        cout << "NO";
    } else {
        cout << "YES";
    }
    
}