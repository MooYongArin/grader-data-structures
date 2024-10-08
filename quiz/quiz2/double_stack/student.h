#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::pop() {
	// modify method here

    if (stack_a.empty())
    {
        std::stack<T> temp;
        while (!stack_b.empty())
        {
            temp.push(stack_b.top());
            stack_b.pop();
        }
        temp.pop();
        while (!temp.empty())
        {
            stack_b.push(temp.top());
            temp.pop();
        }
        
    } else {
        stack_a.pop(); 
    }
    
}

template <typename T>
const T& CP::stack<T>::top() {
	// modify method here
    if (stack_a.empty())
    {
        std::stack<T> copy_temp;
        copy_temp = stack_b;
        int size = copy_temp.size();
        while (size != 1 && !copy_temp.empty())
        {
            copy_temp.pop();
            size--;
        }
        return copy_temp.top();
    } else {
        return stack_a.top();
    }
}

template <typename T>
const T& CP::stack<T>::bottom() {
	// write your code here
    if (stack_b.empty())
    {
        std::stack<T> copy_temp;
        copy_temp = stack_a;
        int size = copy_temp.size();
        while (size != 1 && !copy_temp.empty())
        {
            copy_temp.pop();
            size--;
        }
        return copy_temp.top();

    } else {
        return stack_b.top();
    }
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	// write your code here
    stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom() {
	// write your code here
    if (stack_b.empty())
    {
        std::stack<T> temp;
        while (!stack_a.empty())
        {
            temp.push(stack_a.top());
            stack_a.pop();
        }
        temp.pop();
        while (!temp.empty())
        {
            stack_a.push(temp.top());
            temp.pop();
        }
        
    } else {
        stack_b.pop(); 
    }
}
#endif
