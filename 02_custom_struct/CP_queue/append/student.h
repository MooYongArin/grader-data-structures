#include "stack.h"
#include "queue.h"

namespace CP
{
    template <typename T>
    void stack<T>::appendStack(stack<T> s)
    {
        stack<T> temp;
        while (!this->empty())
        {
            temp.push(this->top());
            this->pop();
        }
        while (!temp.empty())
        {
            s.push(temp.top());
            temp.pop();
        }
        
        this->operator=(s);
    }

    template <typename T>
    void stack<T>::appendQueue(queue<T> q)
    {
        stack<T> temp;
        stack<T> temp2;
        stack<T> temp3;
        while (!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        while (!temp.empty())
        {
            temp2.push(temp.top());
            temp.pop();
        }
        while (!this->empty())
        {
            temp3.push(this->top());
            this->pop();
        }
        while (!temp3.empty())
        {
            temp2.push(temp3.top());
            temp3.pop();
        }
        this->operator=(temp2);
        
        
        
    }

    template <typename T>
    void queue<T>::appendStack(stack<T> s)
    {
        while (!s.empty())
        {
            this->push(s.top());
            s.pop();
        }
        
    }

    template <typename T>
    void queue<T>::appendQueue(queue<T> q)
    {
        while (!q.empty())
        {
            this->push(q.front());
            q.pop();
        }
    }
}
