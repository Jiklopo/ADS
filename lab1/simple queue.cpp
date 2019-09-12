#include <iostream>

using namespace std;

struct Q{
private:
    int q[100];
    int first, last, size;

public:
    void push(int n){
        q[last] = n;
        last++;
        size++;
    }

    int pop(){
        int value = q[first];
        first++;
        size--;
        return value;
    }

    int front(){
        return q[first];
    }

    int getSize(){
        return size;
    }

    void clear(){
        first = last = size = 0;
        q[0] = 0;   
    }
};

int main(){
    Q q;
    q.clear();
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
            q.clear();
            cout << "ok" << endl;
        }
        else if(input == "front"){
            cout << q.front() << endl;
        }
    }
}
