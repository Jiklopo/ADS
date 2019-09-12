#include <iostream>

using namespace std;

struct Q{
private:
    int q[100];
    int first, last;

    int next(int value){
        if (value + 1 > 100)
            return 0;
        return value + 1;
    }

public:

    Q(){
        first = last = 0;
    }
    void push(int n){
        q[last] = n;
        last = next(last);
    }

    int pop(){
        if(getSize != 0){
            int value = q[first];
            first = next(first);
            return value;
        }
    }

    int front(){
        return q[first];
    }

    int getSize(){
        if (last < first)
            return last + 100 - first;
        return last - first;
    }    
};

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
