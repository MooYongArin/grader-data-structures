#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    
    for (size_t i = 0; i < n; i++)
    {
        bool isFalse = false;
        int mFront, mSize, mCap, last, correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        if (mSize > mCap || last >= mCap || (mFront + mSize) % mCap != last || mFront >= mCap)
        {
            std::cout << "WRONG";
            isFalse = true;
        }
        else
        {
            std::cout << "OK";
        }

        if (correction == 0 || !isFalse)
        {
            std::cout << endl;
            continue;
        }
        if (correction == 1)
        {
            std::cout << " " << (last - mSize + mCap) % mCap;
            ;
        }
        else if (correction == 2)
        {
            std::cout << " " << (last - mFront + mCap) % mCap;
            ;
        }
        else if (correction == 3)
        {
            if (mFront < last)
            {
                std::cout << " " << last + 1;
            }
            else
            {
                std::cout << " " << mFront + mSize - last;
            }
        }
        else if (correction == 4)
        {

            std::cout << " " << (mFront + mSize) % mCap;
        }
        std::cout << endl;
    }
}