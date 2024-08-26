#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
    // WRITE YOUR CODE HERE
    // DON"T FORGET TO RETURN THE RESULT
    stack<int> myStack;
    for (size_t i = 0; i < v.size(); i++)
    {
        pair<int, int> p = v[i];
        if (p.first == 1)
        {
            myStack.push(p.second);
        }
        else
        {
            int ans;
            int y = myStack.top();
            myStack.pop();

            int x = myStack.top();
            myStack.pop();

            if (p.second == 0)
            {
                ans = x + y;
            }
            else if (p.second == 1)
            {
                ans = x - y;
            }
            else if (p.second == 2)
            {
                ans = x * y;
            }
            else
            {
                ans = x / y;
            }
            myStack.push(ans);
        }
    }

    return myStack.top();
}

#endif