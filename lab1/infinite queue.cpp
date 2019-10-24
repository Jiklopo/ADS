#include "infinite_queue.h"

int main(){
    InfQueue q;
    string input;
    while (true){
        cin >> input;
        if(input == "exit"){
            break;
        }
        else if(input == "push"){
            int a;
            cin >> a;
            q.push(a);
        }
        else if(input == "pop"){
            if(q.size() == 0)
                cout << "Error" << endl;
            else 
                cout << q.pop() << endl;
        }
        else if(input == "size"){
            cout << q.size() << endl;
        }
        else if(input == "clear"){
            q = InfQueue();
            cout << "ok" << endl;
        }
        else if(input == "front"){
            if(q.size() == 0)
                cout << "Error" << endl;
            else 
                cout << q.front() << endl;
        }
    }
    cout << "bye";
    return 0;
}