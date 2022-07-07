/*6. Design a C++ program to create class called list with member
functions to insert an element from front as well as to delete
element from front of list. Demonstrate all functions by
creating list object.*/

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
class list
{
    node *l;

public:
    list()
    {
        // l = (node *)malloc(sizeof(node));
        l = NULL;
    }
    void insert(int num)
    {
        node *temp = new node;
        temp->data = num;
        temp->next = l;
        l = temp;
    }

    void del()
    {
        node *temp = l;
        if (l == NULL)
        {
            cout << "list empty" << endl;
        }
        else
        {
            cout << "deleted element  = " << l->data << endl;
            l = l->next;
            delete temp;
        }
        return;
    }

    void display()
    {
        node *temp = l;
        while (temp)
        {
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    int num;
    list obj;
    obj.insert(8);
    obj.insert(6);
    obj.insert(3);
    obj.insert(1);
    obj.display();
    obj.del();
    return 0;
}