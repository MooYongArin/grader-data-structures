#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    long long n, mSize = 0, mCap = 1;
    cin >> n;
    while (n--)
    {
        string method;
        long long amount;
        cin >> method >> amount;
        if (method == "p")
        {
            mSize += amount;
            while (mCap < mSize)
            {
                mCap *= 2;
            }
            
        } else if (method == "o")
        {
            mSize -= amount;
        } else if (method == "r")
        {
            if (mSize > amount)
            {
                mSize = amount;
            } else {
                mSize = amount;
                if (mCap < amount) mCap = amount;
            }
            
        }
    }
    cout << mCap - mSize << endl;
}