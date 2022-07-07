/*4.a) Design a C++ program to implement access control to some
shared resource used by all objects of a class using a static
variable */
#include <iostream>
using namespace std;

class exmp
{
    static int x;

public:
    static void get_x()
    {
        x++;
    }
    static void show()
    {
        cout << "x = " << x << endl;
    }
};
int exmp::x = 1;

int main()
{
    exmp obj1;
    cout << "x initialized in obj1 as  ";
    obj1.show();
    obj1.get_x();
    obj1.show();
    exmp obj2;
    cout << "x initialized in obj2  as  ";
    obj1.show();
    return 0;
}