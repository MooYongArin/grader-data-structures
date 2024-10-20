#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int relation(long long S, long long a, long long b)
{
    long long tmp_b = b, tmp_a = a;
    if (a == b)
    {
        return 4;
    }

    if ((b - 1) / S == a || (a - 1) / S == b)
    {
        return 1;
    }
    // b below a
    if (b > a)
    {
        while (b > a)
        {
            b = (b - 1) / S;
            if (b == a)
            {
                return 2;
            }
        }
    } else if (a > b)
    {
        while (a > b)
        {
            a = (a - 1) / S;
            if (b == a)
            {
                return 2;
            }
        }
    }

    while (tmp_a > 0 && tmp_b > 0)
    {
        tmp_a = (tmp_a-1)/S;
        tmp_b = (tmp_b-1)/S;
    }
    if (tmp_a == tmp_b)
    {
        return 4;
    }
    return 3;
    
    

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    long long s, a, b;
    cin >> n;
    while (n--)
    {
        cin >> s >> a >> b;
        cout << relation(s, a, b) << " ";
        // cout << "test";
    }
    cout << endl;

    return 0;
}