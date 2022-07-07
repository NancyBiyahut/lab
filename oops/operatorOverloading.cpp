/*10. Design a C++ program to implement following operator
overloading concept using complex number. + , - ,+ +, --, = =.*/
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex() {}
    complex(int r, int i)
    {
        real = r;
        img = i;
    }
    complex operator+(complex a);
    complex operator-(complex a);
    void show()
    {
        cout << real << " ";
        cout << img << "\n";
    }
};

complex complex::operator+(complex z)
{
    complex temp;
    temp.real = real + z.real;
    temp.img = img + z.img;
}

complex complex::operator-(complex z)
{
    complex temp;
    temp.real = real - z.real;
    temp.img = img - z.img;
}

int main()
{
    complex t1(6, 7), t2(9, 4), t3;
    cout << "Addition of complex numbers:";
    t3 = t1 + t2;
    t3.show();

    return 0;
}
