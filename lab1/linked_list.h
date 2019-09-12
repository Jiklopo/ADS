struct SingleNode
{
    public:
        int value;
        SingleNode * next;

        SingleNode(){
            value = 0;
            next = nullptr;
        }

        SingleNode(int val){
            value = val;
        }
};

struct DoubleNode
{
    public:
        int value;
        DoubleNode * next;
        DoubleNode * prev;

        DoubleNode(){
            value = 0;
            next = nullptr;
            prev = nullptr;
        }

        DoubleNode(int val){
            value = val;
        }
};