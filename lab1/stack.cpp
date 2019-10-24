#include "stack.h"
using namespace std;

int main(){
    Stack stack;
    string s;
    while (true){
        cin >> s;
        if(s == "exit"){
            cout << "bye";
            break;
        }
        else if(s == "push"){
            int value;
            cin >> value;
            stack.push(value);
            cout << "ok" << endl;
        }
        else if(s == "pop"){
            cout << stack.pop() << endl;
        }
        else if(s == "back"){
            cout << stack.back() << endl;
        }
        else if(s == "size"){
            cout << stack.size() << endl;
        }
        else if(s == "clear"){
            stack = Stack();
            cout << "ok" << endl;
        }
    }
}