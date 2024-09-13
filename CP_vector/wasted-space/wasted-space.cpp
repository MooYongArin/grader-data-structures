#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp_n = n;
    int power = 1;
    if (temp_n == 0 || temp_n == 1)
    {
        cout << 1 - n;
    }
    else if (temp_n == 2)
    {
        cout << 0;
    }
    
    else
    {
        while (temp_n != 0)
        {
            temp_n /= 2;
            power *= 2;
        }
        cout << power - n;
    }

    return 0;
}