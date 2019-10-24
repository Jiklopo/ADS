#include <iostream>
struct SingleNode
{
    public:
        int value;
        SingleNode * next;

        SingleNode(int val){
            value = val;
            next = NULL;
        }
};

struct DoubleNode
{
    public:
        int value;
        DoubleNode * next;
        DoubleNode * prev;

        DoubleNode()
        {
            value = 0;
            next = NULL;
            prev = NULL;
        }

        DoubleNode(int val)
        {
            value = val;
        }
};