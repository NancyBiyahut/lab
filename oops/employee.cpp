/*2(a)Write a C++ program to read the data of n employee and compute net
salary of each employee using pointer. Given that an employee class
contains following :-
Data members: Employee no, Employee name, Basic salary, DA, IT,
Net salary, gross salary
Member functions: To read data, to calculate net salary and to print
data
[DA = 52% of basic salary, IT = 30% of gross salary,
 Gross salary = DA + Basic, Net salary = DA + Basic – IT].*/

#include <iostream>
using namespace std;

class exmp
{
    int emp_no;
    string emp_name;
    int salary;
    int da;
    int it;
    int net;
    int gross;

public:
    void get()
    {
        cout << "enetr name " << endl;
        cin >> emp_name;
        cout << "enetr emp id" << endl;
        cin >> emp_no;
        cout << "enetr salary " << endl;
        cin >> salary;
    }
    void calculate()
    {
        da = 0.52 * salary;
        gross = da + salary;
        it = 0.3 * gross;
        net = da + salary - it;
    }

    void display()
    {
        cout << " name = " << emp_name << "  "
             << "id  = " << emp_no << endl;
        cout << "gros  = " << gross << "  "
             << "net = " << net << endl;
    }
};
int main()
{
    int n;
    cout << "enter the no  of employess " << endl;
    cin >> n;

    // exmp *obj = (exmp *)malloc(sizeof(exmp) * n);
    exmp obj[n], *p;
    for (int i = 0; i < n; i++)
    {
        p = &obj[i];
        p->get();
        p->calculate();
    }
    for (int i = 0; i < n; i++)
    {
        p = &obj[i];
        p->display();
    }
    return 0;
}