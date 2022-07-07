/*4.b) Design a C++ program to keep the track of the number of objects
of a particular class type that are inexistence using a static
variable.
*/
#include <iostream>
using namespace std;

class exmp
{
    static int x;

public:
    exmp()
    {
        cout << "obj created " << ++x << endl;
    }
    ~exmp()
    {
        cout << "obj destroyed " << x-- << endl;
    }
};
int exmp::x = 0;

int main()
{
    exmp obj0, obj1, obj2, obj3;
    return 0;
}