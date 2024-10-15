#include <iostream>
#include <set>
#include <queue>
#include <vector>
using namespace std;

bool ancestor_of(int a, int b)
{
    if (b < a)
    {
        return false;
    }
    while (a < b)
    {
        b = (b-1)/2;
        if (a == b)
            return true;
        
    }
    return false;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n, m;
    cin >> n >> m;
    for (size_t i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "a and b are the same node";
        }
        else if (ancestor_of(a, b))
        {
            cout << "a is an ancestor of b";
        }
        else if (ancestor_of(b, a))
        {
            cout << "b is an ancestor of a";
        }
        else
        {
            cout << "a and b are not related";
        }

        cout << endl;
    }

    return 0;
}