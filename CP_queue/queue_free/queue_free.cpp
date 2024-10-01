// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main()
{
    // Write C++ code here
    int n;
    long long mCap = 1;
    long long mSize = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, k;
        cin >> a >> k;
        if (a == 0)
        {
            mSize += k;
            while (mSize > mCap)
            {
                mCap *= 2;
            }
        }
        if (a == 1)
        {
            mSize -= k;
        }
    }
    cout << mCap - mSize;

    return 0;
}