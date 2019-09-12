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
            int value = stack[last];
            last--;
            return value;
        }

        int front(){
            return stack[last];
        }
};

int main(){
    Stack stack;
    for(int i = 0; i < 10; i++){
        stack.push(i);
    }
    for(int i = 0; i < 10; i++){
        cout << stack.pop() << endl;
    }
    return 0;
}