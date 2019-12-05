#include "linked_list.h"

using namespace std;

struct single_linked_list
{
    SingleNode * head, * tail;

    single_linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void push_back(int a)
    {
        if(head == NULL)
        {
            head = new SingleNode(a);
            tail = head;
        }
        else
        {
            (*tail).next = new SingleNode(a);
            tail = (*tail).next;
        }
    }
};

int main()
{
    single_linked_list l = single_linked_list();


    for(int i = 1; i <= 10; i++)
    {
        l.push_back(i);
    }
    SingleNode * pntr = l.head;
    while(pntr != NULL)
    {
        cout << (*pntr).value << " ";
        pntr = (*pntr).next;
    }
    return 0;
}