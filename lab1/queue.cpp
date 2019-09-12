#include <queue.h>

int main(){
    Q q;
    string input;
    while (true){
        cin >> input;
        if(input == "exit"){
            cout << "bye";
            break;
        }
        else if(input == "push"){
            int a;
            cin >> a;
            q.push(a);
        }
        else if(input == "pop"){
            cout << q.pop() << endl;
        }
        else if(input == "size"){
            cout << q.getSize() << endl;
        }
        else if(input == "clear"){
            Q q;
            cout << "ok" << endl;
        }
        else if(input == "front"){
            cout << q.front() << endl;
        }
    }
}
