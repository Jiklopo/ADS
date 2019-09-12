#include <iostream>
#include <vector>

using namespace std;

struct InfQueue{
    private:
        vector<int> queue;
        int first, last;
    
    public:
        void clear(){
            first = 0;
            last = 0;
            queue.clear();
        }

        void push(int value){
            queue.push_back(value);
            last++;
        }

        int pop(){
            int value = queue.front();
            queue.erase(queue.begin());
            return value;
        }

        int front(){
            return queue.front();
        }

        int getSize(){
            return queue.size();
        }
};

int main(){
    InfQueue q;
    q.clear();
    string input;
    while (true){
        cin >> input;
        bool isSizeZero = q.getSize() == 0;
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
            if(isSizeZero)
                cout << "Error" << endl;
            else 
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
            if(isSizeZero)
                cout << "Error" << endl;
            else 
                cout << q.front() << endl;
        }
    }
    return 0;
}