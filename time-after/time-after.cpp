#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h, m, p, x;
    cin >> h >> m;
    cin >> x;

    // new hr
    if (h+((m+x)/60) >= 24)
    {
        if ((h+((m+x)/60))%24 < 10){
            cout << "0" << (h+((m+x)/60))%24;
        }else {
            cout << (h+((m+x)/60))%24;
        }
    } else if (h+((m+x)/60) < 10)
    {
        cout << "0" << h+((m+x)/60);
    } else
    {   
        cout << h+((m+x)/60);
    }
    
    cout << " ";

    // new min 
    if ((m + (x%60))%60 >= 60)
    {
        cout << (m + (x%60))%60;
    } else if ((m + (x%60))%60 < 10)
    {
        cout << "0" << (m + (x%60))%60;
    } else
    {   
        cout << m + (x%60);
    }
    return 0;
}// g++ time-after.cpp -o time-after