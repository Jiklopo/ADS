#include <iostream>
#include <vector>

using namespace std;

struct InfQueue{
    private:
        vector<int> queue;
    
    public:
        InfQueue(){
            queue = vector<int>();
        }

        void push(int value){
            queue.push_back(value);
        }

        int pop(){
            int value = queue.front();
            queue.erase(queue.begin());
            return value;
        }

        int front(){
            return queue.front();
        }

        int size(){
            return queue.size();
        }
};