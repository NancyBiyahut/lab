/*3.) Write a C++ program to define a student class with data members usn,
name and marks of 3 subjects. And member functions to read, display,
and to calculate average of best 2 marks. Also find who is the topper
among “n” no. of students. */

#include <iostream>
using namespace std;

class exmp
{
public:
    string usn;
    int marks[3];
    int i;
    int avg;
    void get()
    {
        cout << "enter the usn" << endl;
        cin >> usn;
        cout << "enter marks of three sub" << endl;
        for (i = 0; i < 3; i++)
            cin >> marks[i];
    }
    void calculate()
    {
        int z = min(marks[0], min(marks[1], marks[2]));
        int sum = 0;
        for (i = 0; i < 3; i++)
            sum += marks[i];
        sum -= z;
        avg = sum / 2;
    }
    void display()
    {
        cout << "usn = " << usn << "  "
             << "avg marks = " << avg << endl;
    }
};

int main()
{
    int n;
    cout << "enter the no. of students " << endl;
    cin >> n;
    int z = 0;
    string usn;
    exmp obj[100];
    for (int i = 0; i < n; i++)
    {
        obj[i].get();
        obj[i].calculate();
    }
    for (int i = 0; i < n; i++)
    {
        if (obj[i].avg > z)
        {
            z = obj[i].avg;
            usn = obj[i].usn;
        }
        obj[i].display();
    }
    cout << "  the topper is " << usn << "  with marks  " << z << endl;

    return 0;
}