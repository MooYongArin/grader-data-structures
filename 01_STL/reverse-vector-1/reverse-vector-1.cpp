#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, int a, int b)
{
    // write your code only in this function
    int count = 0;
    std::vector<int> temp(v);
    for (size_t i = a; i <= b; i++)
    {
        if (i <= (a+b)/2)
        {
            v[i] = temp[b-(i-a)];
        }else {
            v[i] = temp[b-count];
        }
        count++;
    }
    
}
int main()
{
    // read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    // call function
    reverse(v, a, b);
    // display content of the vector
    for (auto &x : v){
        cout << x << " ";
        }
    cout << endl;
} // g++ reverse-vector-1.cpp -o reverse-vector-1