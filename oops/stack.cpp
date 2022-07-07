#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        arr[++top] = x;
    }
    int pop()
    {
        return arr[top--];
    }

    int peek()
    {
        return arr[top];
    }
};

int main()
{
    stack obj;
    obj.push(8);
    obj.push(2);
    cout << obj.pop();
    cout << obj.peek();
    return 0;
}