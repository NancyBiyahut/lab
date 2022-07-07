#include <iostream>
using namespace std;

class exmp
{
public:
    int x, y;
    exmp()
    {
        x = 6;
        y = 0;
    }
    void get(int c)
    {
        x = c;
    }
    int get()
    {
        return x;
    }
};

class deriv : public exmp
{
    int z;

public:
    deriv()
    {
        z = 8;
    }
    void dis()
    {
        cout << x + z << endl;
    }
};

int main()
{
    deriv obj;
    obj.dis();
    cout << obj.get();
    return 0;
}