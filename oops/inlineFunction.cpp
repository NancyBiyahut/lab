#include <iostream>
using namespace std;

inline int func(int a, int b, int c)
{
    return max(a, max(b, c));
}

int main()
{
    cout << func(4, 7, 8);
    return 0;
}