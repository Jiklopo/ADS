#include <iostream>

using namespace std;

struct Stack{
    private:
        int stack[100];
        int last;


    public:
        Stack(){    
            last = 0;
        }

        void push(int a){
            stack[last] = a;
            last++;
        }

        int pop(){
            if(last != 0){
                int value = stack[last - 1];
                last--;
                return value;
            }
        }

        int back(){
            if(last != 0)
                return stack[last - 1];
        }

        int size(){
            return last;
        }
};