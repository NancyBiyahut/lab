/*5) Design a C++ program to implement a class which accepts date
in different formats (using constructor overloading).
*/

#include <iostream>
#include <cstdio>
using namespace std;

class exmp
{
    int day;
    int month;
    int year;

public:
    exmp(char *d)
    {
        sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
    }
    exmp(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void display()
    {
        cout << " the date in format dd/mm/yy is " << day << '/' << month << '/' << year << endl;
    }
};

int main()
{
    exmp ob1(12, 4, 2003), ob2("10/22/2003");
    ob1.display();
    ob2.display();
    return 0;
}