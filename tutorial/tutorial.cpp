#include <iostream>
#include <vector>

// using namespace std;

int main() {
    int a[2] = {10,20};
    std::pair<std::array<int, 3>, std::pair<int, bool> > p;

    // p.first = 10;
    p.second.first = 20;
    p.second.second = true;

    std::cout << p.first << " " << p.second.first << " " << p.second.second;

    // int a[2] = {10,20};
    // for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    // {
    //     cout << a[i] << endl;
    // }

    // string name;
    // cout << "Input your name : ";
    // cin >> name;
    // cout << "My name is " << name;

    // vector<vector<int> > a;
    // vector<int> b;
    // b[0] = 1;
    // a.push_back(b);


    // a.push_back(2);
    // a.push_back(3);
    // a.insert( a.begin(), 99);
    // vector<bool> b = {true, false, true};
    // for (size_t i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    
    // vector<vector<int> > a;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "i = " << i << endl;
    //     vector<int> b(3);

    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> b[j];
    //         cout << "j = " << j << endl;
    //     }
    //     a.push_back(b);
    // }
    
    // Printing the 2D vector
    // for (int i = 0; i < a.size(); i++) {
    //     for (int j = 0; j < a[i].size(); j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
// g++ tutorial.cpp -o hello-file