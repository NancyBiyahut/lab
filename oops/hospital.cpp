/*7. Design a C++ program for a hospital to create a database
regarding its indoor patients. (Identify the member function).
create a base class to store above information, member function
should include functions to enter information and display list of
all the patients in the database. Create a derived class to store
the information about paediatric patients (less than 12yrs age).*/

#include <iostream>
using namespace std;

class hospital
{
    string name;

public:
    int age;
    void get()
    {
        cout << "Enter name of the patient: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout << name << "\t";
        cout << age << "\t";
    }
};

class pediatric : public hospital
{
    string vaccine;

public:
    void get()
    {

        cout << "enter the name of vaccine to be given \n";
        cin >> vaccine;
    }
    void put()
    {
        if (age < 12)
        {
            display();
            cout << "\t"
                 << "\t";
            cout << vaccine;
            cout << "\n";
        }
        else
            cout << "age greater than 12 not a pediatric patient";
    }
};

int main()
{
    hospital h[5];
    int n;
    cout << "Enter the number of patients \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        h[i].get();
    }
    for (int i = 0; i < n; i++)
    {
        h[i].display();
        cout << "\n";
    }
    pediatric a1[5];
    cout << "Enter the number of pediatric patients \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a1[i].get();
    }
    cout << "pediatric Patient database \n";
    cout << "NAME"
         << "\t"
         << "AGE"
         << "\t"
         << "DATE_OF_ADMISSION "
         << "\t"
         << "DATE_OF_DISCHARGE"
         << "\t"
         << "VACCINE \n";
    for (int i = 0; i < n; i++)
    {
        a1[i].put();
    }
    return 0;
}
